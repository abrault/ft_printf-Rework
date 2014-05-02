/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 09:12:38 by abrault           #+#    #+#             */
/*   Updated: 2014/03/03 18:15:51 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	int		lenght;

	if (dest == NULL || src == NULL)
		return (dest);
	lenght = ft_strlen(src);
	i = -1;
	while ((i++) < lenght)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
