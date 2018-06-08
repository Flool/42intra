/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 19:45:43 by gscott            #+#    #+#             */
/*   Updated: 2018/06/07 21:36:39 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_fac(int num, int fac)
{
	if (num % fac == 0)
		return 1;
	return 0;
}

int	pgcd(int n1, int n2)
{
	int i;
	i = n1 < n2 ? n1 : n2;
	while (i--)
	{
		if (is_fac(n1, i) && is_fac(n2, i))
			return i;
	}
	return 1;	
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));	
	printf("\n");
	return (0);
}
