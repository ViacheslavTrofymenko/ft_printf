/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:05:33 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/25 11:05:35 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_parse_string(char c, va_list *arg);
int	ft_putchar_int(char c);
int	ft_putstr_int(char *str);
int	ft_putnbr_int(int nb);
int	ft_putpointer_int(void *str);
int	ft_put_unsigned_int(unsigned int n);
int	ft_put_hex(unsigned int n, char *hex);

#endif
