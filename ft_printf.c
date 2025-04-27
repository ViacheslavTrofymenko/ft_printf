/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:07:39 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/25 11:07:41 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		chars_count;
	int		i;

	i = 0;
	va_start(args, str);
	chars_count = 0;
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			chars_count += ft_placeholder_scanner(str[i + 1], &args);
			i++;
		}
		else
			chars_count += ft_putchar_int(str[i]);
		i++;
	}
	va_end(args);
	return (chars_count);
}

/*
int	main()
{
	char *str = "Hello";
	int res = printf("res = %p\n", str);
	printf("%d\n", res);
	return (0);
}
*/

