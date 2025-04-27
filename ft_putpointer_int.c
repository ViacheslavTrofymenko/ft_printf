/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:15:54 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/25 16:15:56 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer_int(char *str)
{
	int	count;

	count = ft_putstr_int("0x");
	count += ft_putstr_int(str);
	return (count);
}

