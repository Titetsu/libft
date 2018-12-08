/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:18:41 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/05 14:39:57 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int sym)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)string;
	while (str[i] != '\0')
		i++;
	while (str[i] != sym || i != 0)
		i--;
	if (i == 0 && str[i] != sym)
		return (NULL);
	else
		return (str + i);
}
