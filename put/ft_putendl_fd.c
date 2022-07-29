/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:57:57 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/26 14:58:01 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	if (!str || !fd)
		return ;
	write(fd, str, ft_strlen(str));
	ft_putchar_fd('\n', fd);
}

/*
int	main(void)
{
	int fd = open("./test.txt", O_RDWR);
	char	*s = "bonjour !";
	printf("fd %d\n", fd);
	ft_putendl_fd(s, fd);
	return (0);
}
*/
