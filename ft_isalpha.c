/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:32:29 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:32:30 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (c >= 'a' && c <= 'z')
		return (c);
	else if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (0);
}
