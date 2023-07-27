/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:30:11 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/07/26 22:17:55 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	read_params(const char *str, va_list vl);
char parameters(char c);

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		result_params;

	if (!str)
	{
		return(-1);
	}
	
	va_start(params, str);
	result_params = read_params(str, params);
	va_end(params);
	return(result_params);
}

int	read_params(const char *str, va_list vl)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == '%')
		{
			ft_putchar('%');
		}
		else {
			ft_putchar(str[j]);
		}
		j++;
	}
	return(j);
}

char parameters(char c)
{
		if (c == 'c')
		write(1, c, 1);
	else if (c == 's')
		write(1, c, ft_strlen(c));
	else if(c == 'p')
		//printar um hexadecimal	
	else if (c == 'd')
		int dec;
	else if (c == 'i')
		//printa um inteiro em base 10
	else if (c == 'u')
		//printa um unsigned dec
	else if (c == 'x')
		//printa um numero hexa em lowercase
	else if(c == 'X')
		//printa hexa em uppercase
	else if (c == '%')
		write(1, '%', 1);
}

#include <stdio.h>

int	main(){
	int	c = 0;
	c = ft_printf("%%");
	printf("\n%i\n", c);
	c = printf("%%");
	printf("\n%i", c);
}