/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_XX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:53:21 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/30 21:53:21 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	handle_x(unsigned int num, char per)
{
	char	*base;

	if (per == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
		return (handle_x((num / 16), per) + handle_x((num % 16), per));
	else
		return (ft_putchar(base[num % 16]));
}
