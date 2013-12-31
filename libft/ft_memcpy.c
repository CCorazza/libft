/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:49:15 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/19 17:49:19 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	int		i;
	char	*str;
	char	*str2;

	str = s1;
	str2 = (char *)s2;
	i = 0;
	while (n != 0)
	{
		str[i] = str2[i];
		n--;
		i++;
	}
	return (str);
}
