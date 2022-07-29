/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:00:19 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/29 14:13:35 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*str3;
	int		i;
	int		j;
	size_t	len;	

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	len = ft_strlen(str1) + ft_strlen(str2) + 1;
	str3 = (char *)malloc(sizeof(char) * len);
	if (!str3)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		str3[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
		str3[i++] = str2[j++];
	str3[i] = '\0';
	return (str3);
}

/*
int main(void)
{
	char    *s1;
	char    *s2;

	s1 = "Hello";
	s2 = " World";

	printf("%s\n", ft_strjoin(s1, s2));

	return (0);
}
*/
