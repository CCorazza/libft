/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 16:28:22 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/27 16:28:24 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		str[i] = *s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		str[i] = *s2++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
