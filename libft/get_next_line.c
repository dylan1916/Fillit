/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:23:41 by etordjma          #+#    #+#             */
/*   Updated: 2018/12/10 16:23:51 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_strlen_line(char *str)
{
	size_t				i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

int					get_next_line(const int fd, char **line)
{
	char			buffer[BUFF_SIZE + 1];
	static char		*stock = "\0";
	char			*tmp;
	int				ret;

	if (fd < 0 || BUFF_SIZE < 1 || !line || (ret = read(fd, buffer, 0)) < 0)
		return (-1);
	tmp = ft_strdup(stock);
	while ((!(ft_strchr(tmp, '\n'))) && (ret = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[ret] = '\0';
		if (!(tmp = ft_strfjoin(tmp, buffer)))
			return (-1);
	}
	if (*tmp == '\0')
		return (0);
	*line = ft_strsub(tmp, 0, ft_strlen_line(tmp));
	if (ft_strlen(tmp) == ft_strlen_line(tmp))
		stock = ft_strdup(tmp + ft_strlen_line(tmp));
	else
		stock = ft_strdup(tmp + ft_strlen_line(tmp) + 1);
	free(tmp);
	return (1);
}
