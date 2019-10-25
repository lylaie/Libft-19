/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 21:52:08 by audumont          #+#    #+#             */
/*   Updated: 2019/10/15 11:35:42 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		index;
	int		index2;
	char	*big;

	index = 0;
	big = (char*)haystack;
	while (needle[index] != '\0')
		index++;
	if (index == 0)
		return (big);
	index = 0;
	while (big[index] != '\0' && index < (int)len)
	{
		index2 = 0;
		while (big[index] == needle[index2] && index < (int)len)
		{
			index++;
			index2++;
			if (needle[index2] == '\0')
				return (&big[index - index2]);
		}
		index = index - index2;
		index++;
	}
	return (0);
}
