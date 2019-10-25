/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:04:30 by audumont          #+#    #+#             */
/*   Updated: 2019/10/15 11:32:52 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, char to_find)
{
	char	*copy;
	int		index;

	index = 0;
	copy = (char*)str;
	while (copy[index])
	{
		if (copy[index] == to_find)
			return (copy + index);
		index++;
	}
	if (to_find == '\0')
		return (copy + index);
	return (0);
}
