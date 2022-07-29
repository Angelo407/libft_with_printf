/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:58:40 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/15 16:58:47 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isascii(int ascii)
{
	if (ascii < 0 || ascii > 127)
		return (0);
	else
		return (1);
}

/*
int	main(void)
{
	int	ascii = 150;

	printf("%d", ft_isascii(ascii));
}*/
