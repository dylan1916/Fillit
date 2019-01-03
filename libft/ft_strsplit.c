/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:13:31 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/14 14:32:40 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		k;
	int			fi;
	int			la;
	char		**tab;

	tab = NULL;
	i = 0;
	k = 0;
	if (s && (tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) / 2 + 2))))
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			fi = i;
			while (s[i] && s[i] != c)
				i++;
			la = i;
			if (la > fi)
				tab[k++] = ft_strsub(s, fi, (la - fi));
		}
		tab[k] = NULL;
	}
	return (tab);
}
