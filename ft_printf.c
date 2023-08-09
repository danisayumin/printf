/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:30:11 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/08/08 21:34:19 by dsayumi-         ###   ########.fr       */
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
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == '%')
			convert_params(str[j + 1], vl);
		else
		{
			ft_putchar(str[j]);
		}
		j++;
	}
	return (j);
}

int	convert_params(char str, va_list vl)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_putchar(va_arg(vl, char));
	else if (str == 's')
		count += ft_putstr(va_arg(vl, char *));
	else if (str == 'p')
		count += ft_putptr(va_arg(vl, unsigned long), 0);
	else if (str == 'd' || str == 'i')
		count += ft_putnbr(va_arg(vl, int));
	else if (str == 'u')
		count += ft_putunsign(va_arg(vl, unsigned int));
	else if (str == 'x')
		count += ft_puthex_low(va_arg(vl, unsigned long));
	else if (str == 'X')
		count += ft_puthex_upper(va_arg(vl, unsigned long));
	else if (str == '%')
		count += ft_putchar(va_arg(vl, char));
	return (count);
}

#include <stdio.h>

int	main(void)
{
	int c = 0;
	c = ft_printf("%%");
	printf("\n%i\n", c);
	c = printf("%%");
	printf("\n%i", c);
}