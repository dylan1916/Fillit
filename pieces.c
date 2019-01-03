/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pieces.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 23:56:53 by etordjma          #+#    #+#             */
/*   Updated: 2019/01/01 17:40:57 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	clean_piece(char *str)
{
	int i;
	int l;
	int carac;

	carac = 0;
	i = 0;
	l = 0;
	while (str[l])
	{
		if (str[l] == '.' || (str[l] >= 'A' && str[i] <= 'Z'))
		{
			str[i++] = str[l++];
			carac = 1;
		}
		else
			l++;
		if (str[l] == '\n' && carac-- == 1)
			str[i++] = str[l++];
	}
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
}

char	**separate_pieces(char *str)
{
	int		i;
	char	**tab_pieces;
	int		pieces;
	int		j;
	int		len;

	len = 0;
	j = -1;
	pieces = (ft_strlen(str) + 1) / 21;
	if (!(tab_pieces = (char**)malloc(sizeof(char*) * (pieces + 1))))
		return (NULL);
	while (++j < pieces)
	{
		i = 0;
		if (!(tab_pieces[j] = (char*)malloc(sizeof(char) * 21)))
			return (NULL);
		while (str[len] == '\n')
			len++;
		while (i < 20)
			tab_pieces[j][i++] = str[len++];
		tab_pieces[j][i] = '\0';
		check_clean(tab_pieces[j]);
	}
	tab_pieces[j] = 0;
	return (tab_pieces);
}

void	check_clean(char *str)
{
	check_column(str);
	check_line(str);
	clean_piece(str);
}

void	check_line(char *str)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if ((i % 5) == 0 && str[i] < 65 && str[i + 1] < 65
				&& str[i + 2] < 65 && str[i + 3] < 65)
			while (x++ <= 3)
				str[i++] = '?';
		x = 0;
		i++;
	}
}

void	check_column(char *str)
{
	int column;
	int i;

	column = 0;
	while (column < 4)
	{
		if (str[column] == '.' && str[column + 5] == '.' &&
				str[column + 10] == '.' && str[column + 15] == '.')
		{
			i = 0;
			while (str[i] != '\0')
			{
				if ((i % 5) == column)
					str[i] = '?';
				i++;
			}
		}
		column++;
	}
}
