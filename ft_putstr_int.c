/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:38:31 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/25 15:38:33 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_int(char *str)
{
	if (str == NULL)
		{
			ft_strlen(*str);
			return (6);
		}
	ft_putstr_fd(str, 1);
	return (ft_strlen(*str));
}
