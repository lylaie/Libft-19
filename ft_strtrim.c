/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:18:00 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 14:47:43 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char str, const char *set)
{
	int		index;

	index = 0;
	if (!set)
		return (0);
	while (set[index])
	{
		if (str == set[index])
			return (1);
		index++;
	}
	return (0);
}

char		*ft_strtrim(const char *str, const char *set)
{
	int		len;
	char	*start;
	char	*end;
	int		index;
	char	*tmp;

	if (!str)
		return (0);
	start = (char*)str;
	end = (char*)str + ft_strlen(str);
	while (ft_isset(*start, set))
		start++;
	if (start < end)
		end--;
	while (ft_isset(*end, set))
		end--;
	len = end - start + 1;
	if (!(tmp = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	index = 0;
	while (len-- > 0)
		tmp[index++] = *start++;
	tmp[index] = '\0';
	return (tmp);
}
