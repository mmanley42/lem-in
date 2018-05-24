/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debugs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 14:37:14 by mmanley           #+#    #+#             */
/*   Updated: 2018/05/23 17:13:40 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		ft_print_links(t_room *rooms)
{
	t_room	**links;
	int		y;

	links = rooms->links;
	y = 0;
	ft_printf("Room name = %s\n", rooms->name);
	ft_printf("NB L = %d\nConnections ", rooms->nb_l);
	while (y < rooms->nb_l)
	{
		ft_printf("-->%02d-[%s]", y, links[y]->name);
		y++;
	}
	ft_printf("\n");
}

void		ft_print_rooms(t_room *rooms, int details)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (rooms)
	{
		ft_printf("**********ROOM n_%s**********\n", rooms->name);
		ft_printf("Node --> %02d\n", i++);
		ft_printf("It's role --> %d\n", rooms->role);
		ft_printf("It's coord --> (%d, %d)\n", rooms->x, rooms->y);
		if (details > 0)
			ft_print_links(rooms);
		ft_printf("******************************\n%14|\n");
		rooms = rooms->next;
	}
}

void		ft_print_path(t_path *path_or, int nb)
{
	int		i;
	int		size;
	t_path	*path;

	path = path_or;
	while (path->next)
		path = path->next;
	if (path->yes != 1)
		return ;
	i = 0;
	ft_printf("--------------------------------------\n");
	ft_printf("Path size : %d\n", path->size);
	ft_printf("Path : ");
	size = path->size;
	while (size--)
	{
		ft_printf("[%s]",path->links[i]->name);
		if (size > 0)
			ft_printf("-->");
		i++;
	}
	ft_printf("\n--------------------------------------\n");
}

void		ft_order_path(t_path *path)
{
	
}
