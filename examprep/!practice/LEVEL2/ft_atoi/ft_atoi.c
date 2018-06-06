/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 21:27:52 by gscott            #+#    #+#             */
/*   Updated: 2018/06/06 01:50:59 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int i = 0;
	int num = 0;
	int neg = 1;

	if (str[0] == '-')
	{
		neg = -1;
		i++;
	}

	while (str[i])
	{
		num += str[i] - '0';
		if(str[i + 1])
			num *= 10;
		i++;
	}
	return num * neg;
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("atoi(1234) is %d\n", atoi("1234"));
	printf("ft_atoi(1234) is %d\n", ft_atoi("1234"));
	return (0);
}
