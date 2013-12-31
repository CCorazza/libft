/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 12:01:51 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/24 12:02:52 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	while (i < (size))
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
