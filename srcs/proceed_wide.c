/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proceed_wide.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 08:07:37 by rhabib            #+#    #+#             */
/*   Updated: 2017/03/11 16:44:44 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "printf.h"
#include "libft.h"

int			ft_proceed_wchar(t_options *options, wchar_t *arg)
{
	int		ret;

	(void)options;
	ret = ft_putwchar(arg[0]);
	return (ret);
}

int			ft_proceed_wstr(t_options *options, wchar_t *arg)
{
	int		ret;
	wchar_t	*to_print;

	ret = 0;
	to_print = arg;
	if (options->precision >= 0)
		to_print = ft_apply_precision_wstr(options, to_print);
	if (options->width > 0)
		to_print = ft_apply_width_wstr(options, to_print, arg);
	if (ft_has_flags(options->flags) && to_print)
		to_print = ft_apply_flags(options, to_print, arg);
	ret = ft_putwstr(to_print);
	return (ret);
}
