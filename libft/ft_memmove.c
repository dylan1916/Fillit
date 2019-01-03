/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:33:12 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/14 15:13:40 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	if ((dest < (src + n)) && (src < dest))
	{
		while (n)
		{
			tmp1[n - 1] = tmp2[n - 1];
			n--;
		}
	}
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
