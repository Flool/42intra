/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 21:09:52 by gscott            #+#    #+#             */
/*   Updated: 2018/06/04 21:29:28 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char *f_and_r(char *str, char *old, char *new)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == old[0])
			str[i] = new[0];
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
		ft_putstr(f_and_r(argv[1], argv[2], argv[3]));	
	ft_putchar(10);
	return (0);
}
