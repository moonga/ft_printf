/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:36:29 by rhabib            #+#    #+#             */
/*   Updated: 2015/11/30 16:04:55 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dest;
	const char	*source;

	source = src;
	dest = dst;
	while (n--)
	{
		if (*source == c)
		{
			*dest++ = *source++;
			return (dest);
		}
		*dest++ = *source++;
	}
	return (NULL);
}
