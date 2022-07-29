/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:06:35 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/29 16:54:04 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstSize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < dstSize)
	{
		ft_memcpy(dst, src, src_len);
		dst[src_len] = '\0';
	}
	else if (dstSize != 0)
	{
		ft_memcpy(dst, src, dstSize - 1);
		dst[dstSize - 1] = '\0';
	}
	return (src_len);
}

/*
int main(void)
{
    char	dst[] = "abcde";
	char	src[] = "EFGH";

    printf("%zu\n", strlcpy(dst, src, 6));

    printf("%zu\n", ft_strlcpy(dst, src, 6));

    return (0);
} 
*/
