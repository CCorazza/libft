/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 02:14:50 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/29 02:14:52 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static unsigned int		ft_nbword(char const *s, char c)
{
	unsigned int	nbword;

	nbword = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		nbword = (*s ? nbword + 1 : nbword);
		while (*s && *s != c)
			s++;
	}
	return (nbword);
}

static unsigned int		ft_nextwordlen(char const *s, unsigned int i, char c)
{
	unsigned int	len;

	len = 0;
	while (s[i + len] != '\0' && s[i + len] != c)
		len++;
	return (len);
}

char					**ft_strsplit(char const *s, char c)
{
	char				**ret;
	unsigned int		i;
	unsigned int		nbword;
	unsigned int		j;
	unsigned int		nextword;

	nbword = ft_nbword(s, c);
	nbword = (nbword == 0 ? 1 : nbword);
	i = 0;
	j = 0;
	ret = (char **)malloc((nbword + 1) * sizeof(char *));
	while (i < nbword)
	{
		while (s[j] == c)
			j++;
		nextword = ft_nextwordlen(s, j, c);
		nextword = (nextword == 0 ? 1 : nextword);
		if ((ret[i] = ft_strsub(s, j, nextword)) == NULL)
			return (NULL);
		j += nextword;
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
