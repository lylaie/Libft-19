/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:07:25 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 14:14:26 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;
	size_t			index;

	if (b == 0)
		return (0);
	dest = (unsigned char*)b;
	index = 0;
	while (index < len)
	{
		dest[index] = (unsigned char)c;
		index++;
	}
	return (void*)dest;
}
