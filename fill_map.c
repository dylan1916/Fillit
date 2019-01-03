/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanouji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 02:14:47 by mzanouji          #+#    #+#             */
/*   Updated: 2019/01/01 17:27:44 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int mul;

	mul = 0;
	if (nb <= 0 || nb >= 2147483647)
		return (0);
	while ((mul * mul) < nb && mul <= 46341)
		mul++;
	return (mul);
}

void	fill_map(char *map, int cote)
{
	int i;
	int carac;

	i = -1;
	carac = 0;
	while (++i < ((cote + 1) * cote))
	{
		if (carac == cote)
		{
			map[i] = '\n';
			carac = 0;
		}
		else
		{
			map[i] = '.';
			carac++;
		}
	}
	map[i] = '\0';
}

int		create_map(char **tab_piece, int cote)
{
	char *map;

	if (!(map = (char*)malloc(sizeof(char) * (cote + 1) * cote + 1)))
		return (-1);
	fill_map(map, cote);
	place_piece(map, tab_piece, cote);
	return (1);
}
