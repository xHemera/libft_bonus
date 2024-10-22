/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_lstmap_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:42:14 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/22 13:44:28 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(), void (*del)())
{
	t_list	*root;
	t_list	**current;
	void	*content;

	root = NULL;
	current = &root;
	while (lst)
	{
		content = f(lst->content);
		*current = ft_lstnew(content);
		if (!*current)
		{
			ft_lstclear(&root, del);
			if (del)
				del(content);
			return (NULL);
		}
		current = &(*current)->next;
		lst = lst->next;
	}
	return (root);
}
