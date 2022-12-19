/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:53:11 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/30 21:53:11 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	handle_id(int num)
{
	char	c;

	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		return (handle_id(num) + 1);
	}
	else if (num > 9)
		return (handle_id(num / 10) + handle_id(num % 10));
	else
	{
		c = num + '0';
		write(1, &c, 1);
		return (1);
	}
}
