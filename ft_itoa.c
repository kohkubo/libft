/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohkubo <kohkubo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:55:44 by kohkubo           #+#    #+#             */
/*   Updated: 2020/11/18 23:00:20 by kohkubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while ((n = n / 10))
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		index;
	int		flag;
	long	nl;

	nl = (long)n;
	index = digit_len(n);
	flag = 0;
	if (!(str = (char *)malloc(sizeof(char) * index + 1)))
		return (0);
	str[index] = '\0';
	if (nl < 0)
	{
		flag = 1;
		nl *= -1;
	}
	while (0 < index)
	{
		str[--index] = nl % 10 + '0';
		nl /= 10;
	}
	if (flag)
		str[0] = '-';
	return (str);
}
