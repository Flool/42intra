/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:41:47 by gscott            #+#    #+#             */
/*   Updated: 2018/06/06 18:30:25 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	if (c >= 9 && c <= 13)
		return 1;
	return 0;
}

void	epur_str(char *str)
{
	int i = 0;
	int flag = 0;

	while (str[i])
	{
		if (is_space(str[i]))
		{
			if (flag && !is_space(str[i + 1]) && str[i + 1])
			{
				ft_putchar(' ');
				flag = 0;
			}
		}
		else 
		{
			ft_putchar(str[i]);
			flag = 1;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar(10);
	return (0);
}
