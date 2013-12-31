/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:35:12 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 09:35:18 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int		i;
	int		cnt;
	char	*str;
	char	*str2;
	char	*strtemp;

	strtemp = (char *)malloc(sizeof(char) * n);
	str = (char *)s1;
	str2 = (char *)s2;
	cnt = n;
	i = 0;
	while (n != 0)
	{
		strtemp[i] = str2[i];
		n--;
		i++;
	}
	i = 0;
	while (cnt != 0)
	{
		str[i] = strtemp[i];
		cnt--;
		i++;
	}
	return (str);
}
