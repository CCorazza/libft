/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:11:43 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 09:14:27 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	int		i;
	char	*str;
	char	*str2;

	str = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (n != 0)
	{
		if (str2[i] == c)
		{
			str[i] = str2[i];
			return (&str[i + 1]);
		}
		else
		{
			str[i] = str2[i];
			n--;
			i++;
		}
	}
	return (NULL);
}
