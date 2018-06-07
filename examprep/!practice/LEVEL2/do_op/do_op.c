/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:30:53 by gscott            #+#    #+#             */
/*   Updated: 2018/06/06 19:36:20 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	do_op(char *num1, char *op, char *num2)
{
	int n1 = atoi(num1);
	int n2 = atoi(num2);
	if (op[0] == '+')
		return n1 + n2;
	if (op[0] == '-')
		return n1 - n2;
	if (op[0] == '*')
		return n1 * n2;
	if (op[0] == '/')
		return n1 / n2;
	return n1 % n2;
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%d", do_op(argv[1], argv[2], argv[3]));
	printf("\n");
	return (0);
}
