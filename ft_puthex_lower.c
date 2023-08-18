/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:38:13 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/08/17 21:54:04 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_puthex_low(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex_low(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
	return (count);
}
