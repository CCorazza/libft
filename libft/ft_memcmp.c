/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:26:33 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 10:26:36 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	str1;
	unsigned char	str2;

	while (n--)
	{
		str1 = *(unsigned char *)s1++;
		str2 = *(unsigned char *)s2++;
		if (str1 != str2)
			return (str1 - str2);
	}
	return (0);
}
