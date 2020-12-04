/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohkubo <kohkubo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 12:21:32 by kohkubo           #+#    #+#             */
/*   Updated: 2020/11/18 23:28:20 by kohkubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nb_l;

	nb_l = (long)n;
	if (nb_l < 0)
	{
		ft_putchar_fd('-', fd);
		nb_l *= -1;
	}
	if (10 <= nb_l)
	{
		ft_putnbr_fd(nb_l / 10, fd);
		nb_l %= 10;
	}
	ft_putchar_fd(nb_l + '0', fd);
}
