/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:12:40 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/22 02:44:47 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (0);
	if (!(ptr = (char *)malloc(sizeof(*ptr) * len + 1)))
		return (NULL);
	if (ptr)
	{
		ptr = ft_strncpy(ptr, &s[start], len);
		ptr[len] = '\0';
	}
	return (ptr);
}
