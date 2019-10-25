/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:52:13 by audumont          #+#    #+#             */
/*   Updated: 2019/10/25 16:00:57 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*act;
	t_list	*next;

	if (lst && *lst && del)
	{
		act = *lst;
		while (act)
		{
			next = act->next;
			ft_lstdelone(act, del);
			act = next;
		}
		*lst = 0;
	}
}
