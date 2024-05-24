/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 10:52:45 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/10/17 10:56:00 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int	main(void)
{
	char	*s;

	s = "Hello, world!";
	ft_putendl_fd(s, 1);
	return(0);
}
*/