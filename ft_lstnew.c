/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohkubo <kohkubo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:55:16 by kohkubo           #+#    #+#             */
/*   Updated: 2020/12/03 15:21:51 by kohkubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *elem;

	if (!content)
		return NULL;
	if (!(elem = malloc(sizeof(t_list))))
		return (0);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
