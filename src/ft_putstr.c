/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:40:08 by arharif           #+#    #+#             */
/*   Updated: 2021/12/16 21:40:15 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	ft_putstr(char *str, int *cp)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)", cp);
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], cp);
		i++;
	}
}
