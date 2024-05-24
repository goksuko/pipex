/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:25:20 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/10/20 11:25:23 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	ch;

	ch = 0;
	printf("%d\n", ft_isascii(ch));
	printf("%d\n", isascii(ch));
	return (0);
}
*/