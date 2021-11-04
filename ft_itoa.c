/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:33:14 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:33:17 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long n)
{
	size_t	counter;

	counter = 1;
	if (n < 0)
	{
		n *= -1;
		counter++;
	}
	while ((n / 10) > 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*loc;
	long	m;
	size_t	len;

	m = n;
	len = get_len(m);
	if (m < 0)
		m *= -1;
	loc = (char *)malloc(len + 1);
	if (loc == (void *)0)
		return ((void *)0);
	loc[len] = 0;
	while (len)
	{
		loc[len - 1] = (m % 10) + '0';
		m /= 10;
		len--;
	}
	if (n < 0)
		*loc = '-';
	return (loc);
}
