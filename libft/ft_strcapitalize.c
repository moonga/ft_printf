/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 20:49:42 by rhabib            #+#    #+#             */
/*   Updated: 2015/11/30 20:53:07 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int		was_an;
	char	*cpy;

	was_an = 0;
	cpy = str - 1;
	while (*(++cpy))
	{
		if (!was_an && *cpy >= 'a' && *cpy <= 'z')
			*cpy -= 32;
		if (was_an && *cpy >= 'A' && *cpy <= 'Z')
			*cpy += 32;
		if (ft_isalnum(*cpy))
			was_an = 1;
		else
			was_an = 0;
	}
	return (str);
}
