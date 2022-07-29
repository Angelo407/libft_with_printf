/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:04:00 by aprosper          #+#    #+#             */
/*   Updated: 2021/12/01 13:27:03 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < len)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	char	dst[] = "abcd";
	char	src[] = "EFGH";
	
	printf("%s\n", memcpy(dst, src, 2));
	printf("%s\n", ft_memcpy(dst, src, 2));

	return (0);
}
*/
