/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:07:45 by aprosper          #+#    #+#             */
/*   Updated: 2021/12/01 13:29:12 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	if (substr[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while ((i + j) < len && str[i + j] == substr[j])
		{
			if (substr[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	full_string[] = "abcdefghijklnmopqrstuvwxyz";
	char	sub_string[] = "ef";
	
//	printf("%s\n", strnstr(full_string, sub_string, 10));

	printf("\n\n%s\n", ft_strnstr(full_string, sub_string, 10));	

	return (0);
}
*/
