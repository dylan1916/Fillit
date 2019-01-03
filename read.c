/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 23:42:36 by etordjma          #+#    #+#             */
/*   Updated: 2019/01/01 19:06:14 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		letter_pieces(char *str)
{
	int		lettre;
	int		i;
	int		pieces;

	i = -1;
	pieces = 1;
	lettre = 'A';
	while (str[++i])
	{
		if (str[i] == '#')
			str[i] = lettre;
		if ((i + 1) % 21 == 0)
		{
			pieces++;
			lettre++;
		}
	}
	return (pieces);
}

int		ft_read(char *file)
{
	int		fd;
	int		byte;
	char	*buff;
	int		pieces;
	char	**tab_piece;

	if (!(buff = (char *)malloc(sizeof(char) * 547)))
		return (-1);
	fd = open(file, O_RDONLY);
	ft_bzero(buff, 547);
	byte = read(fd, buff, 546);
	if (byte == 0 || byte == -1 || check_buff(buff) == 0)
	{
		ft_putendl("error");
		return (0);
	}
	pieces = letter_pieces(buff);
	tab_piece = separate_pieces(buff);
	create_map(separate_pieces(buff), ft_sqrt(pieces * 4));
	return (1);
}

int		check_buff(char *buff)
{
	if (verif_file(buff) == 0)
		return (0);
	if (verif_line(buff) == 0)
		return (0);
	if (verif_char(buff) == 0)
		return (0);
	if (count_char(buff) == 0)
		return (0);
	if (verif_pieces(buff) == 0)
		return (0);
	return (1);
}
