/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:58:30 by etordjma          #+#    #+#             */
/*   Updated: 2019/01/01 17:51:17 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putendl("usage : only one param");
		ft_putendl("example: ./fillit sample.fillit");
		return (0);
	}
	ft_read(argv[1]);
	return (0);
}
