/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 10:43:25 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/10/17 10:51:42 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int	main(void)
{
	char	*s;

	s = "Hello, world!";
	ft_putstr_fd(s, 1);
	return(0);
}
*/