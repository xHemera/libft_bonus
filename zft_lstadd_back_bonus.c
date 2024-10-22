/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:24:07 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/20 20:27:18 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ! DO NOT PUSH TO VOGSPHERE
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
		lst = &(*lst)->next;
	(*lst) = new;
}
