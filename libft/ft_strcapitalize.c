/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:31:07 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/14 18:33:28 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strlowcase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
		a++;
	}
	return (str);
}

char			*ft_strcapitalize(char *str)
{
	int a;

	a = 0;
	str = ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z') && (a == 0 ||
				!((str[a - 1] >= 97 && str[a - 1] <= 122) ||
				(str[a - 1] >= 48 && str[a - 1] <= 57) ||
				(str[a - 1] >= 65 && str[a - 1] <= 90))))
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
