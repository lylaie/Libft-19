/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:07:36 by audumont          #+#    #+#             */
/*   Updated: 2019/10/07 11:14:07 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int nb)
{
	if (nb >= 97 && nb <= 122)
		return (nb -= 32);
	return (nb);
}
