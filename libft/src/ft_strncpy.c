/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 15:45:45 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 16:07:53 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *desti, const char *source, size_t size)
{
	size_t	i;

	if (desti == NULL || source == NULL || size == 0)
		return (desti);
	i = 0;
	while (i < size && (desti[i] != 0 && source[i] != 0))
	{
		desti[i] = source[i];
		i++;
	}
	return (desti);
}
