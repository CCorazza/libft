/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:28:07 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 15:28:13 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[len] != '\0' && n != 0)
	{
		s1[i] = s2[len];
		i++;
		len++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
