/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:40:49 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 14:32:03 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	index;

	index = 0;
	len_dst = ft_strlen((const char*)dst);
	len_src = ft_strlen(src);
	if (len_dst < size)
		len_src += len_dst;
	else
		len_src += size;
	while (src[index] != '\0' && (len_dst + 1) < size)
		dst[len_dst++] = src[index++];
	dst[len_dst] = '\0';
	return (len_src);
}
