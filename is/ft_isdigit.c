/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:58:58 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/15 16:59:01 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int nbr)
{
	if (nbr >= 48 && nbr <= 57)
	{
		return (1);
	}
	else
		return (0);
}

/*
int	main(void)
{
	int	d = 50;

	printf("%d", ft_isdigit(d));
}*/
