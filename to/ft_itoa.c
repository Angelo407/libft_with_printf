/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:31:45 by aprosper          #+#    #+#             */
/*   Updated: 2021/12/01 13:06:37 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_countsize(int n)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	return (count);
}

static int	ft_isneg(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static char	*ft_main_processing(char *str, size_t i, long nbr, int neg)
{
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	if (neg == -1)
		str[i] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		neg;
	size_t	i;
	char	*str;
	long	nbr;

	nbr = n;
	i = 0;
	neg = ft_isneg(nbr);
	if (neg == -1)
		i = 1;
	nbr = nbr * neg;
	i = i + ft_countsize(nbr);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[i] = '0';
	return (ft_main_processing(str, i, nbr, neg));
}

/*
int	main(void)
{
	int	nb = -56789;
	
//	ft_itoa(nb);
	printf("%s\n", ft_itoa(nb));
	
	return (0);
}
*/
