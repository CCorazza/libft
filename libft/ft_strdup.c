/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:03:45 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 11:03:49 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * len + 1);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = s1[i];
	return (dest);
}
