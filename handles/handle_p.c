/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:53:13 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/30 21:53:13 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	handle_p(unsigned long p)
{
	unsigned long int	ad;

	ad = (unsigned long int)p;
	if (ad == 0)
		return (write (1, "(nil)", 5));
	write(1, "0x", 2);
	return (ft_puthex(ad) + 2);
}
