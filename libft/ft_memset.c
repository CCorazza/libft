/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:49:44 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/19 17:49:54 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*str;

	str = b;
	i = 0;
	while (len != 0)
	{
		str[i] = c;
		len--;
		i++;
	}
	return (b);
}
