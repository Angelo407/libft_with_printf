/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:05:17 by aprosper          #+#    #+#             */
/*   Updated: 2022/07/28 10:33:59 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

/*
int	main(void)
{
	const	char *str = "salutations";
	int	c = 97;
	
	printf("%s\n", strchr(str, c));
	printf("%s\n", ft_strchr(str, c));

	return (0);
}
*/
