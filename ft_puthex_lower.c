/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:38:13 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/08/08 22:25:41 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_ishexa(unsigned long n, char index)
{
	int	count;

	count = 0;
	if (n / 16 > 0)
		count += ft_ishexa(n / 16, index);
	if (index == 'x')
		count += ft_putchar(0123456789abcdef[n % 16]);
	else
		count += ft_putchar(BASEUP[n % 16]);
	return (count);
}
