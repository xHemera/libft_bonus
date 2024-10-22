/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_lstiter_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:41:39 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/22 13:44:19 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)())
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
