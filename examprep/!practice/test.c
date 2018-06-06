/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 22:38:11 by gscott            #+#    #+#             */
/*   Updated: 2018/06/03 23:28:40 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	main(int argc, char **argv)
{
	//Strings
	char *name1;
	char *name2;
	char *name3;

	name1 = "daniel";
   	name2 = "dylan";
   	name3 = "griffin";


	//Array of strings
	char **array;

	array[0] = name1;
	array[1] = name2;
	array[2] = name3;

	printf("name is %s\n", name1);
	printf("*name is %d\n", *name1);



	return (0);

}
