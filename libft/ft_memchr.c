/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:49:11 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 09:49:14 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *) s;
	i = 0;
	while (n != 0 && s)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		else
		{
			i++;
			n--;
		}
	}
	return (NULL);
}
