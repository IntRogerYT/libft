/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:37:46 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/07 11:01:30 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i++ < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
