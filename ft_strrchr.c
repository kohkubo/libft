/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohkubo <kohkubo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 15:53:03 by kohkubo           #+#    #+#             */
/*   Updated: 2020/12/02 15:23:00 by kohkubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char const	*e;

	if (c == 0)
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	e = s + ft_strlen(s);
	while (1)
	{
		if (--e < s)
			break ;
		if ((unsigned char)*e == (unsigned char)c)
			return ((char *)e);
	}
	return (NULL);
}
