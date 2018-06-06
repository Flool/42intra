/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 04:57:44 by gscott            #+#    #+#             */
/*   Updated: 2018/06/01 05:23:52 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int i;
	int p;

	i = 0;
	p = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			p = i;
		i++;
	}
	while (str[p])
	{
		p++;
		write(1, &str[p], 1);
	}
}

int	main(int argc, char **argv)
{
	last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
