/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:11:31 by exam              #+#    #+#             */
/*   Updated: 2017/10/31 12:11:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned char   swap_bits(unsigned char octet)
{
  return ((octet >> 4) + ( octet << 4));
}