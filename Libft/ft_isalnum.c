/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:25:07 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/10/20 11:25:09 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	n;

	n = 'a';
	printf("%d\n", ft_isalnum(n));
	printf("%d\n", isalnum(n));
	return (0);
}
*/