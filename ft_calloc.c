/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:56:00 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 14:15:29 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_calloc(size_t count, size_t size)
{
	unsigned char		*dest;
	unsigned int		len;

	len = count * size;
	dest = (unsigned char*)malloc(sizeof(unsigned char) * len);
	if (!dest)
		return (0);
	ft_memset(dest, 0, len);
	return ((void*)dest);
}
