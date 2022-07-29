/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prct_c_prct_s_to_str.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 20:40:31 by aprosper          #+#    #+#             */
/*   Updated: 2022/07/29 15:58:09 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_prct_c_prct_to_str(char *str, int idx, va_list ap)
{
	char	c;

	if (str[idx + 1] == 'c')
	{
		c = va_arg(ap, int);
		write(1, &c, 1);
		return (1);
	}
	else if (str[idx + 1] == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_prct_s_to_str(char *str, int idx, va_list ap)
{
	char	*s;

	if (str[idx + 1] == 's')
	{
		s = va_arg(ap, char *);
		if (s == 0)
		{
			write(1, "(null)", 6);
			return (6);
		}
		else
			ft_putstr(s);
		return (ft_strlen(s));
	}
	return (0);
}
