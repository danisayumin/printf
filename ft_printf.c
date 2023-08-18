/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:30:11 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/08/17 22:47:25 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		read_params(const char *str, va_list vl);
char	parameters(char c);

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		result_params;

	if (!str)
	{
		return (-1);
	}
	va_start(params, str);
	result_params = read_params(str, params);
	va_end(params);
	return (result_params);
}

int	read_params(const char *str, va_list vl)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			convert_params((char *)str, i, vl);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	convert_params(char *str, int i, va_list vl)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count += ft_putchar(va_arg(vl, int));
	else if (str[i] == 's')
		count += ft_putstr(va_arg(vl, char *));
	else if (str[i] == 'p')
		count += ft_putptr(va_arg(vl, unsigned long), 0);
	else if (str[i] == 'd' || str[i] == 'i')
		count += ft_putnbr(va_arg(vl, int));
	else if (str[i] == 'u')
		count += ft_putunsign(va_arg(vl, unsigned int));
	else if (str[i] == 'x')
		count += ft_puthex_low(va_arg(vl, unsigned long));
	else if (str[i] == 'X')
		count += ft_puthex_upper(va_arg(vl, unsigned long));
	else if (str[i] == '%')
		return (1);
	return (count);
}
