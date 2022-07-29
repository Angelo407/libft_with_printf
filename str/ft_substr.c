/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:08:08 by aprosper          #+#    #+#             */
/*   Updated: 2021/12/01 13:14:08 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	j;

	if (!str)
		return (NULL);
	if (ft_strlen(str) < len)
		len = ft_strlen(str);
	sub_str = (char *)malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	j = 0;
	while (start < ft_strlen(str) && j < len)
	{
		sub_str[j] = str[start];
		start++;
		j++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}

/*
int main(void)
{
	char    *str;
    
	str = "HelloWorld";

	printf("%zu\n", ft_strlen(str));
	printf("%s\n", ft_substr(str, 0, 15));
	
	return (0);
}
*/
