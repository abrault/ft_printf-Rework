/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 15:39:53 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 15:40:17 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t		i;
	const char	*p1;
	const char	*p2;

	i = 0;
	while (i < num)
	{
		p1 = ptr1 + i;
		p2 = ptr2 + i;
		if (*p1 != *p2)
			return (*p1 - *p2);
		i++;
	}
	return (0);
}
