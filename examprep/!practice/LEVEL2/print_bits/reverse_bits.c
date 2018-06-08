/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 21:46:52 by gscott            #+#    #+#             */
/*   Updated: 2018/06/07 21:49:34 by gscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	reversed = 0;
	while (i > 0)
	{
		if (octet & 1)
			reversed += 1;
		octet >>= 1;
		reversed <<= 1;
		i--;
	}
	return (reversed | octet);
}
