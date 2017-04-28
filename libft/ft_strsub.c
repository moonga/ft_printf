/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:24:40 by rhabib            #+#    #+#             */
/*   Updated: 2015/12/18 17:14:54 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = ft_strnew(len);
	if (!str)
		return (NULL);
	i = 0;
	while (len && s)
	{
		str[i] = s[start + i];
		len--;
		i++;
	}
	return (str);
}
