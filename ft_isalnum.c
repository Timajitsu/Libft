/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:32:09 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:32:17 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else if (c >= 'a' && c <= 'z')
		return (c);
	else if (c >= '0' && c <= '9')
		return (c);
	else
		return (0);
}
