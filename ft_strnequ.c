/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 10:22:19 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:18:15 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (s1 && s2)
	{
		if (ft_strncmp(s1, s2, n) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
