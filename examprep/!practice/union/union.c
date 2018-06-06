/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:19:54 by gscott            #+#    #+#             */
/*   Updated: 2018/06/05 21:02:57 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	verif_char(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}


void	do_union(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (verif_char(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (verif_char(s1, s2[i], i) && verif_char(s2, s2[i], i))
			write(1, &s2[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		do_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
