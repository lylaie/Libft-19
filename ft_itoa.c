/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:28:31 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 14:25:09 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_num(unsigned int nb, char *str)
{
	*str-- = '\0';
	if (!nb)
		*str = '0';
	while (nb)
	{
		*str-- = (nb % 10) + '0';
		nb /= 10;
	}
}

char				*ft_itoa(int n)
{
	unsigned int	size;
	unsigned int	sign;
	char			*dest;
	unsigned int	nb;
	unsigned int	nb1;

	sign = 0;
	size = 0;
	nb = (n < 0) ? -n : n;
	sign = (n < 0) ? 1 : 0;
	nb1 = nb;
	while (nb1 >= 10)
	{
		size++;
		nb1 = nb1 / 10;
	}
	size++;
	dest = (char*)malloc(sizeof(char) * (size + 1 + sign));
	if (!dest)
		return (0);
	if (sign && (*dest = '-'))
		ft_num(nb, dest + size + 1);
	else
		ft_num(nb, dest + size);
	return (dest);
}
