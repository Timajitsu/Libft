/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:37:43 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:37:44 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char			*p;
	unsigned char			char_to_insert;

	p = (unsigned char *)b;
	char_to_insert = (unsigned char)c;
	while (len)
	{
		*p = char_to_insert;
		p++;
		len--;
	}
	return (b);
}
