/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 23:32:53 by vcourtin          #+#    #+#             */
/*   Updated: 2013/12/25 23:33:02 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strcut_end(char const *s, char c)
{
	int		i;
	int		size;
	int		len;
	char	*str;
	char	*end;

	i = 0;
	size = 0;
	len = ft_strlen(s);
	i = len - 1;
	while (s[i] != c)
		i--;
	end = (char *)&s[i];
	size = len - i;
	str = (char *)malloc((size) + 1);
	i = 0;
	while (size != 0)
	{
		str[i++] = *s;
		s++;
	}
	str[i] = '\0';
	return (str);
}
