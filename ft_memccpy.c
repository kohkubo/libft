/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohkubo <kohkubo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:36:52 by kohkubo           #+#    #+#             */
/*   Updated: 2020/10/07 19:10:31 by kohkubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*d;
	unsigned char	*s;

	uc = (unsigned char)c;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (0 < n--)
	{
		if ((*d++ = *s++) == uc)
			return (d);
	}
	return (NULL);
}
