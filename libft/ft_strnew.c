/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:41:54 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/13 13:14:28 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*ptr;
	size_t		i;

	i = 0;
	if (!(ptr = (char *)malloc(sizeof(*ptr) * size + 1)))
		return (NULL);
	while (i < size + 1)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
