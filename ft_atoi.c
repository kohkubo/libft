/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohkubo <kohkubo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:10:03 by kohkubo           #+#    #+#             */
/*   Updated: 2020/10/07 18:43:49 by kohkubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	long long	nb;
	int			flag;

	nb = 0;
	flag = 1;
	while (*s == '\t' || *s == '\n' || *s == '\v' || *s == '\f' \
	|| *s == '\r' || *s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			flag *= -1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		nb *= 10;
		nb += (long long)*s - '0';
		s++;
	}
	return ((int)(nb * flag));
}
