/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:40:13 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:40:15 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	character;

	character = (char)c;
	while (*s)
	{
		if (*s == character)
			return ((char *)s);
		s++;
	}
	if (*s == character)
		return ((char *)s);
	return ((void *)0);
}
