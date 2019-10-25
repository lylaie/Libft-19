/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:35:37 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 13:16:59 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy;
	size_t			index;

	copy = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (copy[index] == (unsigned char)c)
		{
			return ((void*)copy + index);
		}
		index++;
	}
	return (0);
}
