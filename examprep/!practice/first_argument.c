/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 23:29:03 by gscott            #+#    #+#             */
/*   Updated: 2018/06/03 23:33:36 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("argv[0] is %s\n", argv[0]);
	printf("argv[1] is %s\n", argv[1]);
	return (0);
}
