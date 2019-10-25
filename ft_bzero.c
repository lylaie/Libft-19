/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:32:39 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 14:24:38 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	int				index;

	if (!s)
		return ;
	dest = (unsigned char*)s;
	index = 0;
	if ((int)n != 0)
	{
		while (index < (int)n)
		{
			dest[index] = '\0';
			index++;
		}
	}
}
