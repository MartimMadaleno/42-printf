/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:53:51 by mmendes-          #+#    #+#             */
/*   Updated: 2022/12/01 16:53:51 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
		return (ft_puthex(nb / 16) + ft_puthex(nb % 16));
	else
		return (ft_putchar(base[nb % 16]));
}
