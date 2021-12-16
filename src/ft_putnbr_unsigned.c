/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:39:09 by arharif           #+#    #+#             */
/*   Updated: 2021/12/16 21:39:19 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *cp)
{
	if (n < 10)
		ft_putchar(n + '0', cp);
	else
	{
		ft_putnbr(n / 10, cp);
		ft_putchar((n % 10) + '0', cp);
	}
}
