/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:53:11 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/27 11:53:13 by vtrofyme         ###   ########.fr       */
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
	int	count;

	count = 1;
	ft_print_unsigned(nbr);
	while (nbr > 9)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}
