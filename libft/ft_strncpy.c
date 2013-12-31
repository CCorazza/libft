/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:04:18 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 11:04:21 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s2[j] && j < n)
		{
			s1[i] = s2[j];
			i++;
			j++;
		}
	if (ft_strlen(s2) <= n)
		{
			while (i < n)
			{
				s1[i] = '\0';
				i++;
			}
		}
	return (s1);
}
