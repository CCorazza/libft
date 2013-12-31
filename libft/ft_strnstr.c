/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:00:34 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 18:00:40 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i] != '\0' && n != 0)
	{
		j = 0;
		while ((s1[i] == s2[j]) && ((s1[i] != '\0') || (s2[j] != '\0')))
		{
			n --;
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i - j);
		n--;
		i = i - j + 1;
	}
	return (NULL);
}
