/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:44:02 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 17:44:09 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while ((s1[i] == s2[j]) && ((s1[i] != '\0') || (s2[j] != '\0')))
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i - j);
		i = i - j + 1;
	}
	return (NULL);
}
