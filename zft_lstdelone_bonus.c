/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_lstdelone_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:29:40 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/22 13:44:14 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)())
{
	if (del)
		del(lst->content);
	free(lst);
}
