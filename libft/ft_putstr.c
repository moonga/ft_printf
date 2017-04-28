/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:48:02 by rhabib            #+#    #+#             */
/*   Updated: 2016/01/19 09:46:51 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t		ft_putstr(char const *s)
{
	int		nbr;

	if (s)
	{
		nbr = ft_strlen(s);
		write(1, s, nbr);
		return (nbr);
	}
	else
		return (ft_putstr("(null)"));
}
