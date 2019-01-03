/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:52:37 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/11 23:07:31 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*tab;
	size_t			i;

	a = (unsigned char)c;
	tab = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tab[i] = a;
		i++;
	}
	return (s);
}
