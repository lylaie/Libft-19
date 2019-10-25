/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:50:09 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 14:26:57 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	unsigned int	i;
	unsigned char	c;

	nb = n;
	i = 0;
	if (n < 0)
	{
		nb = -n;
		write(fd, "-", 1);
	}
	if (nb >= 10)
	{
		i = nb % 10;
		nb = nb / 10;
		ft_putnbr_fd(nb, fd);
		c = i + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = nb + '0';
		write(fd, &c, 1);
	}
}
