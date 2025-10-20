/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:22:09 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/17 13:50:46 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *nptr)
{
	char	*res;
	size_t	i;

	res = (char *)nptr;
	while (res[i] != '\0')
		if (res[i] >= 48 && res[i] <= 57)
			res -= 48;
	return ((int)res);
}
