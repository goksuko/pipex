/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 20:26:18 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/12/16 11:22:36 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_hexadecimal(unsigned int hexa)
{
	char			*letters;
	static size_t	total;

	total = 0;
	letters = "0123456789abcdef";
	if (hexa >= 16)
	{
		print_hexadecimal(hexa / 16);
	}
	total += write(1, &letters[hexa % 16], 1);
	return (total);
}

size_t	print_upp_hexadecimal(unsigned int hexa)
{
	char			*letters;
	static size_t	total;

	total = 0;
	letters = "0123456789ABCDEF";
	if (hexa >= 16)
	{
		print_upp_hexadecimal(hexa / 16);
	}
	total += write(1, &letters[hexa % 16], 1);
	return (total);
}

size_t	pointer_helper(unsigned long int hexa)
{
	char			*letters;
	static size_t	total;

	total = 0;
	letters = "0123456789abcdef";
	if (hexa >= 16)
	{
		pointer_helper(hexa / 16);
	}
	total += write(1, &letters[hexa % 16], 1);
	return (total);
}

size_t	print_pointer(unsigned long int nb)
{
	static size_t	total;

	if (nb == 0)
	{
		print_string("(nil)");
		return (5);
	}
	print_string("0x");
	total = pointer_helper(nb);
	total = 2 + total;
	return (total);
}
