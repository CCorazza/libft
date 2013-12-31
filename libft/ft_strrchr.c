/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:25:19 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/20 17:25:22 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		match;
	char	*stock;

	i = 0;
	match = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			stock = (char *)&s[i];
			match = 1;
			i++;
		}
		else
			i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	else if (match == 1)
		return (stock);
	else
		return (NULL);
}
