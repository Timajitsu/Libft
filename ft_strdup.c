/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:40:32 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:40:34 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_str;
	char	*p;
	char	*start;

	len_str = ft_strlen(s1) + 1;
	p = (char *)malloc(len_str);
	if (!p)
		return ((void *)0);
	start = p;
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	*p = *s1;
	return (start);
}
