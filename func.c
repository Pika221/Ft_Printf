/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:35:22 by hialpagu          #+#    #+#             */
/*   Updated: 2024/11/26 00:44:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_chr(char c)
{
	write (1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	int	count;
	
	count = 0;
	if (!str)
	{
		count += write (1, "(null)", 6);
		return (count);
	}
	while (*str)
		count += write (1, str++, 1);
	return (count);
}

int	print_ptr(unsigned long p)
{
	int	count;

	count = 0;
	if (p == 0)
		return (print_str("(nil)"));
	count += write (1, "0x", 2);
	count += print_hex(p, 'x');
	return (count);
}
