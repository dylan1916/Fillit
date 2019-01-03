/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:52:23 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/11 22:45:25 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char a;
	unsigned char *tmp1;
	unsigned char *tmp2;

	a = (unsigned char)c;
	tmp1 = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	while (n)
	{
		*tmp1 = *tmp2;
		tmp1++;
		n--;
		if (*tmp2 == a)
			return (tmp1);
		tmp2++;
	}
	return (NULL);
}
