/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 17:43:35 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 15:26:07 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strstr(const char *str_1, const char *str_2)
{
	int		i;
	int		j;
	int		mem;

	i = 0;
	j = 0;
	mem = 0;
	if (str_1 == NULL || str_2 == NULL)
		return (NULL);
	while (str_1[i] != '\0')
	{
		if (str_1[i] == str_2[j])
		{
			if (j == 0)
				mem = i;
			j++;
		}
		else
			j = 0;
		if (j == ft_strlen(str_2))
			return ((char*)str_1 + mem);
		i++;
	}
	return (NULL);
}
