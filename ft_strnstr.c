/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:43:11 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:43:12 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_consist(const char *s1, const char *s2, size_t len)
{
	size_t	counter;

	counter = 0;
	while (s2[counter])
	{
		if (counter > len)
			return (0);
		if (s1[counter] != s2[counter])
			return (0);
		counter++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*p1;
	const char	*p2;
	size_t		counter;

	p1 = (char *)haystack;
	p2 = (char *)needle;
	if (!*needle)
		return ((char *)p1);
	counter = 0;
	while (p1[counter] && len--)
	{
		if (*p1 == *p2)
		{
			if (is_consist(p1, p2, len) == 1)
				return ((char *)p1);
		}
		p1++;
	}
	return ((void *)0);
}
