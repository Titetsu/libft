/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:40:40 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/05 14:37:32 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *string1, const char *string2, size_t n)
{
	int		i;
	size_t	j;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char*)string1;
	str2 = (char*)string2;
	while (str1[i] != '\0')
	{
		j = 0;
		while ((j != n) && (str2[j] == str1[i + j]))
		{
			if (str2[j + 1] == '\0' || j == n)
				return (str1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
