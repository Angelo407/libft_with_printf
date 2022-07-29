/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:08:33 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/29 13:46:31 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t element_number, size_t element_size)
{
	int		x;
	char	*ptr;
	int		i;

	x = element_number * element_size;
	ptr = (void *)malloc(x);
	i = 0;
	if (!ptr)
		return (NULL);
	while (x--)
		ptr[i++] = 0;
	return (ptr);
}

/*
int main(void)
{
	void *p;
	int i = 0;
	
		//printf("%d\n", *(int *)calloc(3, 4));
	//ft_memset((void *)p, 'X',3);
	//printf("%s", (char*) p);
	p = (int*)ft_calloc(3,4);
	while (i < 3)
	{
		printf("%d", *(int *)(p + i));
		i++;
	}
    return (0);
}
*/
