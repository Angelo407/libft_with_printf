/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:58:07 by aprosper          #+#    #+#             */
/*   Updated: 2022/01/08 21:05:54 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalnum(int alpha)
{
	if (alpha >= 48 && alpha <= 57)
		return (1);
	else if ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	alpha = 89;

	printf("%d", ft_isalnum(alpha));
}*/
