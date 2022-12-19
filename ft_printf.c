/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:23:52 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/19 21:23:52 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handleper(const char str, va_list *ap)
{
	if (str == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (str == 's')
		return (handle_s(va_arg(*ap, char *)));
	else if (str == 'p')
		return (handle_p(va_arg(*ap, unsigned long int)));
	else if (str == 'd' || str == 'i')
		return (handle_id(va_arg(*ap, int)));
	else if (str == 'u')
		return (handle_u(va_arg(*ap, unsigned int)));
	else if (str == 'x' || str == 'X')
		return (handle_x(va_arg(*ap, unsigned int), str));
	else if (str == '%')
		ft_putchar('%');
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			i += handleper(*str, &ap);
		}
		else
			i += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (i);
}
