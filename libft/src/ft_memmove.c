/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 15:41:03 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 15:41:07 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *destination, void *source, size_t num)
{
	char	*str_1;
	char	*str_2;
	size_t	i;

	i = 0;
	str_1 = destination;
	str_2 = source;
	while (i < num && str_1[i] != '\0')
	{
		str_1[i] = str_2[i];
		i++;
	}
	return (destination);
}
