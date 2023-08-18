/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:32:23 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/08/17 21:54:06 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_puthex_upper(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex_upper(n / 16);
	write(1, &"0123456789ABCDEF"[n % 16], 1);
	return (count);
}
