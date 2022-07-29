/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:02:32 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/29 12:48:41 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *str, int c, size_t str_len)
{
	size_t			i;

	i = 0;
	while (i < str_len)
	{
		if (*((unsigned char *)str + i) == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const 	void	*str = "salutations";
	int	c = 'a';

	printf("%s\n", memchr(str, c, 4));
	
	printf("%s\n", ft_memchr (str, c, 4));

	return (0);
}
*/
