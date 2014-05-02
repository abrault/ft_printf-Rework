/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/29 16:50:24 by abrault           #+#    #+#             */
/*   Updated: 2014/05/02 12:44:22 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <stdio.h>

int		main(void)
{
	int		i;
	int		o;
	char	str[] = "Troll %s %s %% %d %s\n";

	i = ft_printf(str, "Pickachu", "Comment", 12345, "Vas tu?");
	o = printf(str, "Pickachu", "Comment", 12345, "Vas tu?");
	printf("\nI : %d - O : %d\n", i, o);
	return (0);
}
