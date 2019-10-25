/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:01:19 by audumont          #+#    #+#             */
/*   Updated: 2019/10/15 16:01:58 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if ((int)n)
	{
		dest = (unsigned char *)dst;
		source = (unsigned char *)src;
		while ((int)n-- >= 0)
			if ((*dest++ = *source++) == (unsigned char)c)
				return ((void*)dest);
	}
	return (0);
}
