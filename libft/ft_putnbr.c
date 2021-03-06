/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:15:41 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/13 17:24:15 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int a;

	a = 0;
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			n = -147483648;
		}
		n = n * (-1);
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		a = n % 10;
		ft_putchar(a + 48);
	}
}
