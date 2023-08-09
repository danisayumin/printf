/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:56:19 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/08/08 21:21:08 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *c, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_strlen(const char *s);
char	ft_putptr(unsigned long nbr, int i);
void	putunsign(unsigned int nbr);

#endif
