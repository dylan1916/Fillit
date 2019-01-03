/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:43:42 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/14 14:32:24 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count(int n)
{
	int		i;

	i = 2;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	long	i;
	int		longueur;
	char	*str;

	i = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	longueur = count(n);
	if (!(str = (char *)malloc(sizeof(char) * longueur)))
		return (NULL);
	if (n < 0)
		n = n * (-1);
	str[--longueur] = '\0';
	while ((--longueur) >= 0)
	{
		str[longueur] = n % 10 + '0';
		n = n / 10;
	}
	if (i < 0)
		*str = '-';
	return (str);
}
