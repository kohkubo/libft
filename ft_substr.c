/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohkubo <kohkubo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 10:48:00 by kohkubo           #+#    #+#             */
/*   Updated: 2020/11/13 13:26:08 by kohkubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	return ((a < b) ? (a) : (b));
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*head;

	if (!s)
		return (NULL);
	if (!(sub = (char *)malloc(ft_min(ft_strlen(s) - start, len) + 1)))
		return (NULL);
	head = sub;
	while (*s && 0 < start)
	{
		s++;
		start--;
	}
	while (start == 0 && 0 < len-- && *s)
		*sub++ = *s++;
	*sub = '\0';
	return (head);
}
