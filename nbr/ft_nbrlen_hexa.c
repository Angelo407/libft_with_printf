/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:48:58 by aprosper          #+#    #+#             */
/*   Updated: 2022/07/28 12:44:27 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_nbrlen_hexa(unsigned int nb)
{
	size_t	i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

size_t	ft_nbrlen_hexa_p(unsigned long long int nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}
