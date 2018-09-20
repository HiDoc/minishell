/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyildiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:26:00 by jyildiz-          #+#    #+#             */
/*   Updated: 2018/09/20 16:26:03 by jyildiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*start;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	new = f(lst);
	start = new;
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		new = f(lst);
		tmp->next = new;
		tmp = new;
		lst = lst->next;
	}
	tmp = NULL;
	new = start;
	return (new);
}
