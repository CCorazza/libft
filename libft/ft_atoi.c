/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:49:16 by vcourtin          #+#    #+#             */
/*   Updated: 2013/11/21 13:49:19 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		sign;

	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		sign = (*(str++) == '-' ? -sign : sign);
	while (*str >= '0' && *str <= '9')
		res = res * 10 + ((*(str++) - '0') * sign);
	return (res);
}
