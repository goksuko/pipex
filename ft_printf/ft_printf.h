/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 20:00:33 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/12/16 11:23:12 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

# ifndef FT_PRINTF_ERROR
#  define FT_PRINTF_ERROR -1
# endif

# ifndef STDOUT_FD
#  define STDOUT_FD 1
# endif

int		ft_printf(const char *format, ...);
size_t	print_char(int i);
size_t	print_string(void *ptr);
size_t	print_decimal(int nb);
size_t	print_unsign_decimal(unsigned int nb);
size_t	print_hexadecimal(unsigned int hexa);
size_t	print_upp_hexadecimal(unsigned int hexa);
size_t	print_pointer(unsigned long int nb);
size_t	pointer_helper(unsigned long int hexa);

#endif