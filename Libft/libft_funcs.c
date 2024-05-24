/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_funcs.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 11:35:53 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/02/07 11:24:41 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// // #include "push_swap.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	n;

// 	n = 0;
// 	while (s[n] != 0)
// 		n++;
// 	return (n);
// }

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	src_len;

// 	src_len = ft_strlen(src);
// 	if (dst == NULL || src == NULL || !size)
// 		return (src_len);
// 	while (*src && --size)
// 		*dst++ = *src++;
// 	*dst = '\0';
// 	return (src_len);
// }

// char	*ft_strdup(const char *s)
// {
// 	char	*temp;
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	temp = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
// 	if (!temp)
// 		return (NULL);
// 	i = 0;
// 	while (s[i])
// 	{
// 		temp[i] = s[i];
// 		i++;
// 	}
// 	temp[i] = '\0';
// 	return (temp);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*sub;

// 	if (s == NULL)
// 		return (NULL);
// 	if (ft_strlen(s) < start)
// 		return (ft_strdup(""));
// 	if (!s)
// 		return (0);
// 	if (ft_strlen(s + start) < len)
// 		len = ft_strlen(s + start);
// 	sub = malloc(sizeof(char) * (len + 1));
// 	if (!sub)
// 		return (NULL);
// 	ft_strlcpy(sub, s + start, len + 1);
// 	return (sub);
// }

// static char	**clean(char **matrix, size_t string_no)
// {
// 	while (string_no--)
// 		free(matrix[string_no]);
// 	free(matrix);
// 	return (NULL);
// }

// static int	count_strings(const char *s, char delimiter)
// {
// 	size_t	string_nb;

// 	string_nb = 0;
// 	while (*s)
// 	{
// 		while (*s == delimiter && *s)
// 			s++;
// 		if (*s != delimiter && *s)
// 		{
// 			string_nb++;
// 			while (*s != delimiter && *s)
// 				s++;
// 		}
// 	}
// 	return (string_nb);
// }

// static char	**fill_matrix(char **matrix, const char *s, char c)
// {
// 	size_t	i;
// 	size_t	string_no;
// 	size_t	string_len;
// 	size_t	start;

// 	i = 0;
// 	string_no = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 			i++;
// 		else
// 		{
// 			start = i;
// 			while (s[i] != '\0' && s[i] != c)
// 				i++;
// 			string_len = i - start;
// 			matrix[string_no] = ft_substr(s, start, string_len);
// 			if (matrix[string_no] == NULL)
// 				return (clean(matrix, string_no));
// 			string_no++;
// 		}
// 	}
// 	matrix[string_no] = NULL;
// 	return (matrix);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		string_nb;
// 	char	**matrix;

// 	if (s == NULL)
// 		return (NULL);
// 	string_nb = count_strings(s, c);
// 	matrix = (char **)malloc(sizeof(char *) * (string_nb + 1));
// 	if (matrix == NULL)
// 		return (NULL);
// 	matrix = fill_matrix(matrix, s, c);
// 	if (matrix == NULL)
// 		return (NULL);
// 	matrix[string_nb] = NULL;
// 	return (matrix);
// }

// static int	ft_isspace(int c)
// {
// 	if (c == ' ' || c == '\f' || c == '\n'
// 		|| c == '\r' || c == '\t' || c == '\v')
// 		return (1);
// 	else
// 		return (0);
// }

// int	ft_atoi(const char *nptr)
// {
// 	int	i;
// 	int	sign;
// 	int	nb;

// 	i = 0;
// 	sign = 1;
// 	nb = 0;
// 	if (nptr[i] != '\0')
// 	{
// 		while (ft_isspace(nptr[i]) == 1)
// 			i++;
// 		if (nptr[i] == '-')
// 			sign = -1;
// 		if (nptr[i] == '-' || nptr[i] == '+')
// 			i++;
// 		while (nptr[i] >= '0' && nptr[i] <= '9')
// 		{
// 			nb = (10 * nb) + (nptr[i] - '0');
// 			i++;
// 		}
// 	}
// 	return (sign * nb);
// }

// // int	main(void)
// // {
// // 	char	*s;
// // 	char	ss[] = "tripouille";
// // 	int		c;

// // 	s = "Hello";
// // 	c = 'l';
// // 	printf("org code:%s\n", strrchr(s, c));
// // 	printf(" my code:%s\n", ft_strrchr(s, c));
// // 	printf("org code:%s\n", strrchr(ss, 't' + 256));
// // 	printf(" my code:%s\n", ft_strrchr(ss, 't' + 256));
// // 	return (0);
// // }