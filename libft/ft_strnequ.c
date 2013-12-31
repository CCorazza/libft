/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:46:26 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/25 18:46:29 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	i = 0;
	if ((s1[i] == s2[i]) && (s1[i] == '\0'))
		return (1);
	if (n == 0)
		return (1);
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (n == 0)
			return (1);
		n--;
		i++;
	}
	if (n == 0)
		return (1);
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
