/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 12:45:44 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:15:30 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		l;

	if (!(s1 && s2))
		return (NULL);
	l = (ft_strlen(s1) + ft_strlen(s2));
	fresh = ((char*)malloc(sizeof(char) * (l + 1)));
	if (fresh == NULL)
		return (NULL);
	ft_strcpy(fresh, s1);
	ft_strcat(fresh, s2);
	return (fresh);
}
