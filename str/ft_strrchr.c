/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:08:15 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/29 12:40:28 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) + 1;
	while (i-- != 0)
	{						
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	str[] = "salutations";
	int	c = 'a';
//	char	*s;

	printf("%s\n", strrchr(str, c));
	printf("%s\n", ft_strrchr(str, c));
//	s = ft_strrchr(str, c);
//	printf("%s\n", s);

// ligne 23 j aurais pu ecrire : return ((char *)str + i);

	return (0);
}
*/
