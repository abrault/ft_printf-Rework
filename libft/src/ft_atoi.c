/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/10 13:55:10 by abrault           #+#    #+#             */
/*   Updated: 2014/04/15 16:00:09 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_atoi(const char *str)
{
	int		number;
	int		isneg;
	int		i;

	number = 0;
	i = 0;
	isneg = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] >= '0' && str[i] <= '9')
			number = str[i] - '0' + number * 10;
		else if (str[i] > '9' || (str[i] < '0' && i > 0))
			break ;
		else if (str[0] == '-' && i == 0)
			isneg = 1;
		else if (str[0] == '+' && i == 0)
			;
		else
			break ;
		i++;
	}
	if (isneg)
		number = 0 - number;
	return (number);
}
