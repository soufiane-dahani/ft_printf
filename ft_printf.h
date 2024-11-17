/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sodahani <sodahani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:01:32 by sodahani          #+#    #+#             */
/*   Updated: 2024/11/17 13:16:32 by sodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putnbr(int n, int *len);
void	ft_putstr(const char *str, int *len);
void	ft_putchar(char c, int *len);
void	ft_puthex(unsigned int n, int uppercase, int *len);
int		ft_printf(const char *format, ...);

#endif