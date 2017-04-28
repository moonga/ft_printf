/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 22:15:19 by rhabib            #+#    #+#             */
/*   Updated: 2016/01/08 13:31:33 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, int c, int n)
{
	int		count;
	char	*str;

	count = 0;
	str = (char *)s;
	while (count < n)
	{
		str = ft_strchr(str, c);
		count++;
		if (count != n)
			str++;
		if (!*str)
			return (NULL);
	}
	return (str);
}
