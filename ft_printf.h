/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:39:06 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/19 21:39:06 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	handle_id(int num);
int	handle_s(char *str);
int	handle_p(unsigned long p);
int	handle_u(unsigned int num);
int	handle_x(unsigned int num, char per);
int	ft_puthex(unsigned long int nb);
int	ft_putchar(char c);

#endif