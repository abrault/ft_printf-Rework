/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 18:14:05 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 18:18:19 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

int		ft_putendl(char *str)
{
	int		len;

	len = ft_strlen(str);
	write(1, str, len);
	write(1, "\n", 1);
	return (len + 1);
}
