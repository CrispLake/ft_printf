/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:01:27 by emajuri           #+#    #+#             */
/*   Updated: 2022/11/22 15:43:47 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char *str = "World";
	printf("%i\n", printf("char:|%c| string:|%s| address:|%p| decimal:|%d| integer:|%i| unsigned integer:|%u| hexa:|%x| HEXA:|%X| percent sign:|%%|\n", 'r', "Hello", str, 12, -5, -239422, 431, 431));
//	ft_printf("%c\n", 'r')
	return (0);
}
