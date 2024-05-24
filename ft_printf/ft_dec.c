/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dec.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 20:26:34 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/12/11 23:47:37 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_number(int nb)
{
	static size_t	total;
	char			c;

	total = 0;
	if (nb >= 10)
	{
		print_number(nb / 10);
	}
	if (nb >= 0 && nb <= INT_MAX)
	{
		c = (char)((nb % 10) + '0');
		write(STDOUT_FD, &c, sizeof(char));
		total++;
	}
	return (total);
}

size_t	print_decimal(int nb)
{
	static size_t	total;

	total = 0;
	if (nb == -2147483648)
	{
		write(STDOUT_FD, "-2147483648", 11);
		total = 11;
	}
	if (nb < 0 && nb > -2147483648)
	{
		write(STDOUT_FD, "-", sizeof(char));
		nb = -1 * nb;
		total++;
	}
	total += print_number(nb);
	return (total);
}

size_t	print_unsign_decimal(unsigned int nb)
{
	static size_t	total;
	char			c;

	total = 0;
	if (nb >= 10)
	{
		print_unsign_decimal(nb / 10);
	}
	if (nb <= UINT_MAX)
	{
		c = (char)((nb % 10) + '0');
		write(STDOUT_FD, &c, sizeof(char));
		total++;
	}
	return (total);
}
