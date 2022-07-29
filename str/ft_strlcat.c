/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:05:42 by aprosper          #+#    #+#             */
/*   Updated: 2021/12/03 16:04:47 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;
	size_t	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size > 0 && size > dst_size)
	{
		i = dst_size;
		j = 0;
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
		dst[i] = 0;
		return (dst_size + src_size);
	}
	return (size + src_size);
}

/*
int main(void)
{
    char	dst[] = "abcdefghijklmnopqrstuvwxyz";
//	char	dst_1[] = "abcdefghijklmnopqrstuvwxyz";

	char	src[] = "cd";

//	printf("strlcat : %zu\n", strlcat(dst, src, 2));
	printf("ft_strlcat : %zu\n", ft_strlcat(dst, src, 2));
	
    return (0);
}
*/
