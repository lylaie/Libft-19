/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:03:02 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 13:13:59 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	if (!dst)
		return (0);
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	if (!dst && !src)
		return (0);
	while (n-- > 0)
		*dest++ = *source++;
	return (dst);
}
