/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 10:52:15 by wkoelpin          #+#    #+#             */
/*   Updated: 2019/01/05 14:11:11 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*li;
	t_list	*next;

	if (!alst || !del)
		return ;
	li = *alst;
	while (li)
	{
		next = li->next;
		del(li->content, li->content_size);
		free(li);
		li = next;
	}
	*alst = (NULL);
}
