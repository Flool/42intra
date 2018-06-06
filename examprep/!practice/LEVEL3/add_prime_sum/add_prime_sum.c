/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 01:51:31 by gscott            #+#    #+#             */
/*   Updated: 2018/06/06 02:13:31 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long num = n;

	if(num >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	is_prime(int num)
{
	int i = 0;
	while (i < num / 2)
	{
		if (num % i == 0)
			return (0);
		i++;
	}	
	return (1);
}

int add_prime(int num)
{
	int i = num;
	int sum = 0;
	while (i > 0)
	{
		if (is_prime(i))
			sum += i;
	}
	return sum;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(add_prime(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
