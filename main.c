/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 22:48:03 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/08/17 22:48:26 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	ch;

	ch = '0';
	printf("print: |%c|\n", ch);
	ft_printf("seu print: |%c|\n", ch);
}

// void ft_function(int i, ...)
// {
// 	va_list va;

// 	va_start(va, i);
// 	printf("%d\n", va_arg(va, int));
// 	printf("%c\n", va_arg(va, char));
// 	printf("%s\n", va_arg(va, char *));

// }
