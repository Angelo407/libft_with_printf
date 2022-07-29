/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 08:16:04 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/29 16:50:24 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
char	*ft_strtrim(char const *str1, char const *set)
{
	//char	*str2;
	size_t		i;
	
	//str2 = (char *)malloc(sizeof(char) * (ft_strlen(str1) - ft_strlen(set)) + 1);
	if (!str1 || !set)
		return (NULL);
	while (*str1 != '\0' && ft_strchr(set, *str1))
		str1++;
	i = (char *)ft_strlen(str1);
	while (i != 0 && ft_strchr(set, str1[i]))
		i--;
	return (ft_substr(str1, 0, i + 1));
	

//	char	*ft_strchr(const char *str, int c)

//	char	*ft_substr(char const *str, unsigned int start, size_t len)
}
*/

char	*ft_strtrim(char const *str1, char const *set)
{
	size_t		size_s1;

	if (!str1 || !set)
		return (NULL);
	while (ft_strchr(set, *str1) && *str1 != '\0')
		str1++;
	size_s1 = ft_strlen((char *)str1);
	while (ft_strchr(set, str1[size_s1]) && size_s1 != 0)
		size_s1--;
	return (ft_substr((char *)str1, 0, size_s1 + 1));
}

/*
int	main(void)
{
	char const	str1[] = "HelloWorld";
	char const	set[] = "ld";
	
	printf("%s\n", ft_strtrim(str1, set));
	
	return (0);
}
*/
