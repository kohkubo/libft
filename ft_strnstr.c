/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohkubo <kohkubo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 15:05:49 by kohkubo           #+#    #+#             */
/*   Updated: 2020/12/02 15:22:49 by kohkubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	c;
	char	sc;
	size_t	i;

	if ((c = *needle++) != '\0')
	{
		i = ft_strlen(needle);
		while (1)
		{
			while (1)
			{
				if (len-- < 1 || (sc = *haystack++) == '\0')
					return (NULL);
				if (sc == c)
					break ;
			}
			if (len < i)
				return (NULL);
			if (ft_strncmp(haystack, needle, i) == 0)
				break ;
		}
		haystack--;
	}
	return ((char *)haystack);
}
