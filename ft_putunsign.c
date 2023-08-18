/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:09:08 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/08/17 21:53:36 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_putunsign(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr > 9)
		count += ft_putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
	return (count);
}
