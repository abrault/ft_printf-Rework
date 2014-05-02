/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 15:43:00 by abrault           #+#    #+#             */
/*   Updated: 2014/04/26 20:56:51 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_strdup(const char *str)
{
	int		lenght;
	char	*new_string;
	int		i;

	if (str == NULL)
		return (NULL);
	i = 0;
	lenght = ft_strlen(str);
	new_string = malloc(sizeof(char) * lenght);
	while (i < lenght)
	{
		new_string[i] = str[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
