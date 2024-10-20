/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:24:10 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/20 17:49:58 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!s || !*s)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	len;
	int		i;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (*s)
			split[i++] = ft_substr(s, 0, len);
		s += len;
	}
	split[i] = NULL;
	return (split);
}
