/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 15:42:27 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 15:43:27 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *str, int c_ascii)
{
	char	n;
	int		i;

	if (str == NULL)
		return (NULL);
	i = 0;
	n = c_ascii;
	while (str[i] != '\0')
	{
		if (str[i] == n)
			return ((char*)str + i);
		i++;
	}
	if (c_ascii == 0)
		return ((char *)str + i);
	return (NULL);
}
