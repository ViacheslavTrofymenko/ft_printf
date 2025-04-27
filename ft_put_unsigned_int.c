/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viacheslav <viacheslav@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:53:11 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/27 21:36:02 by viacheslav       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_unsigned(unsigned int nbr)
{
	if (nbr > 9)
		ft_print_unsigned(nbr / 10);
	ft_putchar_fd((nbr % 10) + '0', 1);
}

int	ft_put_unsigned_int(unsigned int nbr)
{
	int count;

	count = 1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		count++;
	}
	ft_print_unsigned(nbr);
	return (count);
}
