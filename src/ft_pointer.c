/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:37:07 by arharif           #+#    #+#             */
/*   Updated: 2021/12/16 21:37:21 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	ft_pointer(unsigned long n, const char *base, int *cp)
{
	if (n >= 16)
		ft_pointer(n / 16, base, cp);
	ft_putchar(base[n % 16], cp);
}
