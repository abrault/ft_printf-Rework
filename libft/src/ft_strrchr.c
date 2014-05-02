/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 15:49:07 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 15:49:22 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int c_ascii)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == c_ascii)
			j = i;
		i++;
	}
	if (c_ascii == 0 && str[i] == '\0')
		return ((char*)str + i);
	if (j)
		return ((char*)str + j);
	return (NULL);
}
