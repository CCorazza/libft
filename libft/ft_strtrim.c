/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 16:28:38 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/27 16:28:41 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		size;
	char	*str;
	char	*start;
	char	*end;

	i = 0;
	size = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	start = (char *)&s[i];
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	end = (char *)&s[i];
	size = ((end - start) < 0) ? (start - end) : (end - start);
	str = (char *)malloc((size) + 1);
	i = 0;
	while (start <= end)
	{
		str[i++] = *start;
		start++;
	}
	str[i] = '\0';
	return (str);
}
