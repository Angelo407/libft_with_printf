/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:07:19 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/30 10:18:57 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n--)
	{
		if (*str1 != *str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		if (*str1 == '\0' || *str2 == '\0')
			return (0);
		str1++;
		str2++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str_1[] = "abXd";
	char	str_2[] = "";

	printf("%d\n", strncmp(str_1, str_2, 4));

	printf("%d\n", ft_strncmp(str_1, str_2, 4));

	return (0);
}
*/
