/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:04:47 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/19 16:05:07 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
		((unsigned char *)str)[i++] = c;
	return (str);
}

/*
int	main(void)
{
	char	str[] = "Salut ca va ?";

	printf("%s\n", memset(str, 0, 5));
	
	printf("%s\n", ft_memset(str, '$', 5));
	
	return 0;
}
*/
