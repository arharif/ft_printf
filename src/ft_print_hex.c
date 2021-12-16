/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:37:44 by arharif           #+#    #+#             */
/*   Updated: 2021/12/16 21:37:56 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	ft_print_hex(unsigned int n, const char *base, int *cp)
{
	if (n < 16)
		ft_putchar(base[n], cp);
	else
	{
		ft_print_hex(n / 16, base, cp);
		ft_putchar(base[n % 16], cp);
	}
}
