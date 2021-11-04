/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:42:25 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:42:26 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

static size_t	get_len(char const *s1)
{
	size_t	counter;

	counter = 0;
	while (*s1)
	{
		counter++;
		s1++;
	}
	return (counter);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*loc;

	if (!s || !f)
		return ((void *)0);
	loc = (char *)malloc(get_len(s) + 1);
	if (loc == (void *)0)
		return ((void *)0);
	index = 0;
	while (s[index])
	{
		*(loc + index) = f(index, s[index]);
		index++;
	}
	loc[get_len(s)] = 0;
	return (loc);
}
