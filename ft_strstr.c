/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:27:59 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/27 15:21:02 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *str2)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	if (str2 == str || str2[0] == '\0')
		return ((char*)str);
	while (str[j])
	{
		if (str[j] == str2[i])
		{
			k = j;
			while (str2[i] == str[k])
			{
				i++;
				k++;
				if (i == ft_strlen(str2))
					return ((char*)(str + k - ft_strlen(str2)));
			}
		}
		i = 0;
		j++;
	}
	return (NULL);
}
