/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:18:25 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 13:14:40 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (d == s)
		return (dst);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		s = s + (len - 1);
		d = d + (len - 1);
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
