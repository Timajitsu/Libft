/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:43:27 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:43:48 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		s++;
		counter++;
	}
	if (counter == 0)
		return (0);
	else
		return (counter);
}

char	*ft_strrchr(const char *s, int c)
{
	char	character;
	char	*p;
	size_t	last_char;

	p = (char *)s;
	character = (char)c;
	last_char = get_len(s);
	while (last_char > 0)
	{
		if (p[last_char] == character)
			return (&p[last_char]);
		last_char--;
	}
	if (p[last_char] == character)
		return (&p[last_char]);
	return ((void *)0);
}
