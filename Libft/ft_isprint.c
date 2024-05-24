/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:25:29 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/10/20 11:25:31 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	n;

	n = ' ';
	printf("%d\n", ft_isprint(n));
	printf("%d\n", isprint(n));
	return (0);
}
*/