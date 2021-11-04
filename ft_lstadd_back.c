/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:33:25 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:33:27 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!new && !*lst && !lst)
		return ;
	if (*lst == 0)
		*lst = new;
	else
	{
		p = ft_lstlast(*lst);
		new->next = 0;
		p->next = new;
	}
}
