/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:14:43 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/23 14:18:28 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_startpos(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	len;
	size_t	start;
	size_t	i;

	i = 0;
	start = 0;
	len = ft_strlen(s);
	array = 0;
	while (ft_startpos((s + start), c) != 0)
	{
		len = ft_startpos((s + start), c);
		array[i] = ft_substr(s, start, len);
		start = len + 1;
		i++;
	}
	array[i] = "\0";
	return (array);
}
