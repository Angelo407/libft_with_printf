/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:52:48 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/26 14:56:39 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	if (!str || !fd)
		return ;
	write(fd, str, ft_strlen(str));
}

/*
int	main(void)
{
	int fd = open("./test.txt", O_RDWR);
	char	*s = "bonjour !";
	printf("fd %d\n", fd);
	ft_putstr_fd(s, fd);
	return (0);
}
*/
