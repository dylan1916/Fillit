/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:52:29 by etordjma          #+#    #+#             */
/*   Updated: 2019/01/01 19:08:05 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verif_char(char *str)
{
	int		i;
	int		carac;

	carac = 0;
	i = 0;
	while (str[i])
	{
		if (carac == 4 && str[i] == '\n')
		{
			i++;
			carac = 0;
			if (str[i] == '\n')
				i++;
		}
		else if (str[i] == '.' || str[i] == '#')
		{
			carac++;
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int		verif_file(char *str)
{
	int		i;
	int		count_line;

	i = 0;
	count_line = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (str[i + 1] == '\n' || str[i + 1] == '\0')
			{
				if (count_line != 3)
					return (0);
				count_line = 0;
				i++;
			}
			else
				count_line++;
		}
		i++;
	}
	return (1);
}

int		verif_line(char *str)
{
	int		i;
	int		carac;

	i = 0;
	carac = 0;
	while (str[i] != '\0')
	{
		if (carac == 3 && str[i + 1] == '\n')
		{
			carac = 0;
			i = i + 2;
			if (str[i] == '\n')
				i++;
		}
		else if (carac == 3 && str[i + 1] != '\n')
			return (0);
		else
		{
			carac++;
			i++;
		}
	}
	if (carac > 0)
		return (0);
	return (1);
}

int		count_char(char *str)
{
	int		i;
	int		point;

	i = 0;
	point = 0;
	while (str[i])
	{
		while (!(str[i] == '\n' && str[i + 1] == '\n')
				&& str[i + 1] != '\0')
		{
			if (str[i] == '.')
				point++;
			i++;
		}
		if (point != 12)
			return (0);
		else
			point = 0;
		i++;
	}
	return (1);
}

int		verif_pieces(char *str)
{
	int		i;
	int		link;

	i = 0;
	link = 0;
	while (str[i] != '\0')
	{
		while ((i == 0 || ((i + 1) % 21) != 0) && str[i + 1] != '\0')
		{
			if (str[i] == '#' && str[i + 1] == '#')
				link = link + 2;
			if (((i + 21) % 21 + 5) < 21)
				if (str[i] == '#' && str[i + 5] == '#')
					link = link + 2;
			i++;
		}
		if (link != 6 && link != 8)
			return (0);
		link = 0;
		i++;
	}
	return (1);
}
