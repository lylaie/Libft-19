/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:46:13 by audumont          #+#    #+#             */
/*   Updated: 2019/10/25 15:44:30 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		total;
	char	*resp;

	if (!s1 || !s2)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2);
	resp = (char*)malloc(sizeof(char) * (total + 1));
	if (!resp)
		return (0);
	dest = resp;
	if (s1)
		while (*s1)
			*dest++ = *s1++;
	if (s2)
		while (*s2)
			*dest++ = *s2++;
	*dest = '\0';
	return (resp);
}
