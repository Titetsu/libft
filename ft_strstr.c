/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:27:59 by wkoelpin          #+#    #+#             */
/*   Updated: 2018/12/05 14:34:09 by wkoelpin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *string1, const char *string2)
{
	int		i;
	int		j;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char*)string1;
	str2 = (char*)string2;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] == str1[i + j])
		{
			if (str2[j + 1] == '\0')
				return (str1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
