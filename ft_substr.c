/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:11:24 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 16:52:48 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	index;

	if (start > ft_strlen(s))
	{
		if (!(dest = (char*)malloc(sizeof(char))))
			return (0);
		dest[0] = '\0';
		return (dest);
	}
	dest = (char*)malloc(sizeof(char) * (int)len + 1);
	if (!dest || s == 0)
		return (0);
	index = 0;
	while (index < (unsigned int)len)
	{
		dest[index] = s[start + index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
