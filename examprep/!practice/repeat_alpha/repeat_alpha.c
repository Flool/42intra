/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 03:43:01 by gscott            #+#    #+#             */
/*   Updated: 2018/06/01 04:07:48 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*repeat_alpha(char letter)
{
	int i;

	i = 1;
	if (letter > 64 && letter < 91)
		i = (letter - 64);
	if (letter > 97 && letter < 123)
		i = (letter - 96);
	while (i > 0)
	{
		write(1, &letter, 1);
		i--;
	}
	return (0);
}

int	main(int argc, char **argv)
{

	int i;
	char c;
	
	i = 0;
	c = '\n';
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
	write(1, &c, 1);
	return (0);
}
