/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 15:44:14 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 15:45:29 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	if (dest == NULL || src == NULL || n == 0)
		return (dest);
	while (dest[a] != '\0')
		a++;
	while (src[i] != '\0' && i < n)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (dest);
}
