/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:42:12 by rhabib            #+#    #+#             */
/*   Updated: 2015/11/30 16:04:27 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*ret;
	unsigned int	i;

	ret = NULL;
	i = 0;
	while (*s)
	{
		if (ft_strchr(s, c) != NULL)
			ret = ft_strchr(s, c);
		s++;
	}
	return (ret);
}
