/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 12:30:02 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:06:52 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lt;
	t_list	*new;

	if (!lst)
		return (NULL);
	lt = f(lst);
	new = lt;
	while (lst->next)
	{
		lst = lst->next;
		if (!(lt->next = f(lst)))
		{
			free(lt->next);
			return (NULL);
		}
		lt = lt->next;
	}
	return (new);
}
