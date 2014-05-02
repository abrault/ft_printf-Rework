/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 15:39:31 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 15:39:44 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(void *ptr, int value, size_t num)
{
	char	*str;
	size_t	i;

	i = 0;
	while (i < num)
	{
		str = ptr + i;
		if (value == *str)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
