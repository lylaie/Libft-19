/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:42:20 by audumont          #+#    #+#             */
/*   Updated: 2019/10/19 16:42:45 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!alst)
		return ;
	if (!*alst)
		*alst = new;
	else if (*alst && new)
	{
		tmp = *alst;
		new->next = tmp;
		*alst = new;
	}
}
