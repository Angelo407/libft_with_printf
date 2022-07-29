/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:03:04 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/20 14:24:02 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isprint(int printable)
{
	if (printable > 31 && printable < 127)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	printable = 126;

	printf("%d", isprint(printable));
}
*/
