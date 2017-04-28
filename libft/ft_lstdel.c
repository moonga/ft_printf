/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:53:41 by rhabib            #+#    #+#             */
/*   Updated: 2015/11/30 16:04:59 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*aux;

	if (alst && *alst)
	{
		current = *alst;
		while (current)
		{
			(*del)(current->content, current->content_size);
			aux = current->next;
			free(current);
			current = aux;
		}
		*alst = NULL;
	}
}
