/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:42:00 by etordjma          #+#    #+#             */
/*   Updated: 2019/01/01 18:54:18 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>

int		try_nextplace(char *save_map, char *map, char **tab_piece, int piece);
int		verif_char(char *str);
int		verif_file(char *str);
int		verif_line(char *str);
int		count_char(char *str);
int		ft_sqrt(int nb);
void	fill_map(char *map, int cote);
int		create_map(char **tab_piece, int cote);
int		verif_pieces(char *str);
int		letter_pieces(char *str);
void	check_clean(char *str);
void	clean_piece(char *str);
void	clean_column(char *str, int column);
void	check_line(char *str);
char	**separate_pieces(char *str);
int		place_piece(char *map, char **tab_piece, int cote);
char	*cpy_map(char *map);
void	check_column(char *str);
int		next_line(char *map, int next_carac, int x_map, int line);
int		try_piece(char *map, char **tab_piece, int piece, int x_map);
int		ft_read(char *file);
int		check_buff(char*buff);

#endif
