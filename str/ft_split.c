/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:29:03 by aprosper          #+#    #+#             */
/*   Updated: 2021/12/01 13:28:11 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_nbrstr(const char *str, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		nbr++;
		while (str[i] != c && str[i] != '\0')
			i++;
		while (str[i] == c && str[i] != '\0')
			i++;
	}
	return (nbr);
}

static int	size_next_c(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *str, char c)
{
	int		nbrstr;
	char	**sb_strings;
	size_t	start;
	int		len;
	int		a;

	if (str == NULL)
		return (NULL);
	nbrstr = ft_nbrstr(str, c);
	sb_strings = malloc(sizeof(char *) * (nbrstr + 1));
	if (!sb_strings)
		return (NULL);
	start = 0;
	a = 0;
	while (nbrstr > a)
	{
		while (str[start] == c)
			start++;
		len = size_next_c(&str[start], c);
		sb_strings[a] = ft_substr(str, start, len);
		a++;
		start = start + len;
	}
	sb_strings[nbrstr] = NULL;
	return (sb_strings);
}

/*
int	main(void)
{
	char	s[] = "ABCDE.123.yx.5678";

	char c = '.';
	char	**src;
	int	a = 0;

	src = ft_split(s, c);
	while (a < ft_nbrstr(s, c))
	{
		printf("%s\n", src[a]);
		a++;
	}
//	ft_split(s, c);
		
	return (0);
}
*/
