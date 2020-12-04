/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohkubo <kohkubo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 19:24:04 by kohkubo           #+#    #+#             */
/*   Updated: 2020/12/02 15:28:25 by kohkubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		split_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			len++;
		while (*s && *s != c)
			s++;
	}
	return (len);
}

static int		get_strlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char		*ft_strndup(const char *s1, int n)
{
	char	*dst;

	if (!(dst = (char *)malloc(sizeof(char) * n + 1)))
		return (0);
	ft_strlcpy(dst, s1, n + 1);
	return (dst);
}

static char		**set_str(char const *s, char **dst, char c)
{
	char	**head;

	head = dst;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!(*dst = ft_strndup(s, get_strlen(s, c))))
			{
				while (0 < head - dst)
					free(*dst--);
				return (0);
			}
			dst++;
		}
		while (*s && *s != c)
			s++;
	}
	*dst = NULL;
	return (head);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (s == NULL)
		return (NULL);
	len = split_len(s, c);
	if (!(dst = (char **)malloc(sizeof(char *) * len + 1)))
		return (NULL);
	return (set_str(s, dst, c));
}
