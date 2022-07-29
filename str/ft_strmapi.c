/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:58:08 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/26 15:01:17 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*str1;
	int				i;

	if (!str || !f)
		return (NULL);
	str1 = malloc(sizeof(char) * ft_strlen((char *)str) + 1);
	if (!str1)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str1[i] = f(i, str[i]);
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

/*
int	main(void)
{
	char const		str[] = "salut";
	unsigned int	i = 0;
	char			c = 'X';

	printf("%s\n", ft_strmapi(str, (*)f(i, c)));

	return (0);
}
*/
