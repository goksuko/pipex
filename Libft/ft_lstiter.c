/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 17:01:44 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/10/25 14:03:40 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies the function
’f’ on the content of each node.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
