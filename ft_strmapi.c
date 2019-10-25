/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:52:50 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 14:33:03 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		len;
	char	*dest;
	int		index;

	if (!str || !f)
		return (0);
	len = ft_strlen(str);
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	index = 0;
	while (str[index])
	{
		dest[index] = f(index, str[index]);
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
