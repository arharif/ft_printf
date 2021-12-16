/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:40:50 by arharif           #+#    #+#             */
/*   Updated: 2021/12/16 21:41:03 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *cp);
void	ft_putstr(char *str, int *cp);
void	ft_pointer(unsigned long n, const char *base, int *cp);
void	ft_putnbr(int n, int *cp);
void	ft_putnbr_unsigned(unsigned int n, int *cp);
void	ft_print_hex(unsigned int n, const char *base, int *cp);
void	ft_helper(const char *str, va_list args, int i, int *cp);
#endif
