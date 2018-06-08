/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:09:06 by gscott            #+#    #+#             */
/*   Updated: 2018/06/07 19:40:03 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	find_len(int start, int end)
{
	if (start > end)
		return (start - end + 1);
	return (end - start + 1);
}

int	*ft_rrange(int start, int end)
{
	int len = find_len(start, end);
	int *arr = (int*)malloc(sizeof(int) * len);

	while (len--)
	{
		if (start > end)
		{
		   	arr[len] = start;
			start--;
		}
		else
		{
			arr[len] = start; 
			start++;
		}
	} 
	return arr;
}

#include <stdio.h>
int	main(void)
{
	int *arr = ft_rrange(1, 3);
	printf("it should be 3:  %d\n", arr[0]);
	printf("it should be 2:  %d\n", arr[1]);
	printf("it should be 1:  %d\n", arr[2]);
	return (0);
}
