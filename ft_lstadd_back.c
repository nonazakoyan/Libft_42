 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 22:45:04 by nozakoya          #+#    #+#             */
/*   Updated: 2021/05/01 04:38:07 by nozakoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *i;

	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		i = ft_lstlast(*lst);
		i->next = new;
		new->next = NULL;
	}
}
