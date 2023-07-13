/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:30:11 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/07/12 19:56:26 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

size_t	ft_strlen(const char *s, ...)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_printf(const char *c, ...)
{
	int	i;

	i = 0;

}

char parameters(char)
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