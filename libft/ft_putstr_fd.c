/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 19:44:05 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/28 19:44:07 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s == NULL)
		write(fd, "NULL", 5);
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

