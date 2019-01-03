/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:19:08 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/11 23:26:51 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	int		i;

	i = 0;
	while (len && src[i])
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	while (len)
	{
		dest[i] = '\0';
		i++;
		len--;
	}
	return (dest);
}
