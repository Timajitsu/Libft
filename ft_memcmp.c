/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:36:11 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:36:12 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	int					counter;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	counter = 0;
	if (!s1 && !s2)
		return (0);
	while (len--)
	{
		if (p1[counter] != p2[counter])
			return ((unsigned char)p1[counter] - (unsigned char)p2[counter]);
		counter++;
	}
	return (0);
}
