/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:41:34 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:41:35 by taliza           ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned char		*dst_p;
	const unsigned char	*src_p;
	size_t				total;

	total = get_len(src) + get_len(dst);
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (get_len(dst) >= dstsize)
		return (dstsize + get_len(src));
	while (*dst_p)
	{
		dst_p++;
		dstsize--;
	}
	while (*src_p && dstsize > 1)
	{
		*dst_p = *src_p;
		dst_p++;
		src_p++;
		dstsize--;
	}
	*dst_p = 0;
	return (total);
}
