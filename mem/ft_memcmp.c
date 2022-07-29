/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:03:30 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/29 16:33:05 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	size_t			i;
	unsigned char	*str1_temp;
	unsigned char	*str2_temp;

	str1_temp = (unsigned char *)str1;
	str2_temp = (unsigned char *)str2;
	i = 0;
	while (i < size)
	{
		if (str1_temp[i] != str2_temp[i])
			return (str1_temp[i] - str2_temp[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	//const	void *str1 = "salut";
	//const	void *str2 = "sa;lut";

	char str1[] = "sa;lut";
	char str2[] = "salut";
	
	printf("%d\n", memcmp(str1, str2, 4));
	printf("%d\n", ft_memcmp(str1, str2, 4));

	return (0);
}
*/
