/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Li Y. K. <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:03:02 by Li Y. K.          #+#    #+#             */
/*   Updated: 2017/09/01 11:10:39 by Li Y. K.         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int z;

	z = 128;
	while (z > 0)
	{
		if (z & octet)
		{
			write(1, "1", 1);
		}
		else
			write(1, "0", 1);

		z >>= 1;
	}
}
