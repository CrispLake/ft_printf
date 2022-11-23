/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:01:27 by emajuri           #+#    #+#             */
/*   Updated: 2022/11/23 19:22:14 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
	char	*str = "World";
	char	*null = NULL;

	printf("%i\n", printf("char:|%c| string:|%s| address:|%p| decimal:|%d| integer:|%i| unsigned integer:|%u| hexa:|%x| HEXA:|%X| percent sign:|%%| nullpointer:|%s|\n", 'r', "Hello", str, 12, -5, -239422, -1, -1, null));
	ft_printf("%i\n", ft_printf("char:|%c| string:|%s| address:|%p| decimal:|%d| integer:|%i| unsigned integer:|%u| hexa:|%x| HEXA:|%X| percent sign:|%%| nullpointer:|%s|\n", 'r', "Hello", str, 12, -5, -239422, -1, -1, null));
	return (0);
}
