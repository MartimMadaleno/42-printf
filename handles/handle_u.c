/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:53:17 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/30 21:53:17 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	handle_u(unsigned int num)
{
	if (num > 9)
		return (handle_u(num / 10) + handle_u(num % 10));
	else
		return (ft_putchar(num + '0'));
}
