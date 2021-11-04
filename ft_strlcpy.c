/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:41:54 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:41:56 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(const char *str)
{
	size_t	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char		*dst_p;
	const unsigned char	*src_p;
	size_t				total_len;

	if (dstsize < 1)
		return (get_len(src));
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	total_len = dstsize - 1;
	while (total_len && *src_p)
	{
		*dst_p = *src_p;
		dst_p++;
		src_p++;
		total_len--;
	}
	if (*dst_p != 0)
		*dst_p = 0;
	return (get_len(src));
}
