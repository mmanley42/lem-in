/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 14:36:24 by mmanley           #+#    #+#             */
/*   Updated: 2018/06/01 15:03:41 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		ft_exit(t_room **rooms, t_map **map, t_path **path)
{
	write(2, "Error\n", 6);
	exit(1);
}

t_room		*ft_room_error(t_room *ptr, char **info, char *s)
{
	if (s)
		ft_printf("%s\n", s);
	if (info)
		ft_deltab(info);
	return (ptr);
}

int			ft_error(int ret, char **info, char *s)
{
	if (s)
		ft_printf("%s\n", s);
	if (info)
		ft_deltab(info);
	return (ret);
}

int			ft_error_str(int ret, char *info, char *s)
{
	if (s)
		ft_printf("%s\n", s);
	if (info)
		ft_strdel(&info);
	return (ret);
}

char		*get_line_check(char *line, int fd)
{
	ft_strdel(&line);
	if (get_next_line(fd, &line) < 1)
		return (NULL);
	if (!line || !line[0] || line[0] == 'L')
	{
		ft_printf("Error in new line\n");
		return (NULL);
	}
	return (line);
}
