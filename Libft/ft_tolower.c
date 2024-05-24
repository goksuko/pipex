/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:27:48 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/10/20 11:27:50 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = 'D';
	printf("before: %d\n", c);
	printf(" after: %d\n", ft_tolower(c));
	c = 'D';
	printf("   org: %d\n", tolower(c));
	return (0);
}
*/