/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:49:59 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/24 11:18:29 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*dst;
	const char	*source;
	size_t		len;
	size_t		dst_len;

	dst = dest;
	source = src;
	len = size;
	while (len-- != 0 && *dst != '\0')
		dst++;
	dst_len = dst - dest;
	len = size - dst_len;
	if (len == 0)
		return (dst_len + ft_strlen(source));
	while (*source != '\0')
	{
		if (len != 1)
		{
			*dst++ = *source;
			len--;
		}
		source++;
	}
	*dst = '\0';
	return (dst_len + (source - src));
}
