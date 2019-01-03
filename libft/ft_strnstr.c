/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 01:54:05 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/14 16:00:51 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t		i;
	int			j;
	int			save;

	i = -1;
	j = 0;
	while (hay[++i] != '\0')
	{
		save = i;
		if (need[j] == '\0')
			return ((char*)hay);
		while (hay[i] == need[j] && i < len)
		{
			i++;
			j++;
			if (need[j] == '\0')
				return ((char *)hay + i - j);
		}
		i = save;
		j = 0;
	}
	return (NULL);
}
