/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:58:22 by aprosper          #+#    #+#             */
/*   Updated: 2022/01/08 21:05:37 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int alpha)
{
	if ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	e;

	e = 64;

	printf("%d", ft_isalpha(e));
}*/
