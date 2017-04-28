/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 18:50:20 by rhabib            #+#    #+#             */
/*   Updated: 2016/01/19 18:56:40 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>

int		ft_wcharlen(wint_t wc)
{
	size_t			j;

	j = 1;
	if (wc <= 0x7F)
		return (j);
	if (wc > 0x1FFFFF)
		return (-1);
	while (1)
	{
		if (!(wc >>= 6))
			break ;
		j++;
	}
	return (j);
}
