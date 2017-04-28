/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proceed_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 19:16:25 by rhabib            #+#    #+#             */
/*   Updated: 2017/03/11 17:25:57 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"
#include <stdlib.h>

int		ft_proceed_int(t_options *options, char *arg)
{
	int		ret;
	char	*to_print;

	ret = 0;
	to_print = arg;
	if (options->precision >= 0)
		to_print = ft_apply_precision(options, to_print);
	if (options->width > 0)
		to_print = ft_apply_width(options, to_print, arg);
	if (ft_has_flags(options->flags) && to_print)
		to_print = (char *)ft_apply_flags(options, (wchar_t *)to_print, arg);
	ret = ft_putstr(to_print);
	return (ret);
}
