/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:29:12 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/13 16:29:57 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	char	len;
	int		start;
	int		end;

	start = 0;
	end = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
	{
		start++;
		len--;
	}
	if (len < 0)
		len = 0;
	if (!(ptr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (end < len)
		ptr[end++] = s[start++];
	ptr[end] = '\0';
	return (ptr);
}
