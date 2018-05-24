/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:47:17 by mmanley           #+#    #+#             */
/*   Updated: 2018/02/01 15:40:49 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
	}
	return (i);
}
