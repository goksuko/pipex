/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 16:08:45 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/10/24 16:08:51 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}
