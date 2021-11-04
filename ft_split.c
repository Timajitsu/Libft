/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:39:59 by taliza            #+#    #+#             */
/*   Updated: 2021/10/31 20:40:01 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*clean_line(char **loc)
{
	size_t	count;

	count = 0;
	while (loc[count])
	{
		free(loc[count]);
		count++;
	}
	free(loc);
	return ((void *)0);
}

static size_t	count_of_words(char const *s, char c)
{
	size_t	counter;
	size_t	index;
	int		flag;

	index = 0;
	counter = 0;
	flag = 1;
	while (s[index])
	{
		if (s[index] != c && flag == 1)
		{
			flag = 0;
			counter++;
		}
		else if (s[index] == c && flag == 0)
		{
			flag = 1;
		}
		index++;
	}
	return (counter);
}

static char	*get_str(char const *s, char c)
{
	size_t	len;
	size_t	index;
	char	*loc;

	index = 0;
	len = 0;
	while (s[index] != c)
	{
		len++;
		index++;
	}
	loc = (char *)malloc(len + 1);
	if (loc == (void *)0)
		return ((void *)0);
	loc[len] = 0;
	index = 0;
	while (index < len)
	{
		loc[index] = s[index];
		index++;
	}
	loc[index] = 0;
	return (loc);
}

static int	write_mass(char const *s, char c, char **main_m)
{
	size_t	len;
	int		flag;
	size_t	index;
	int		counter;

	len = count_of_words(s, c);
	counter = 0;
	flag = 1;
	index = 0;
	while (index < len)
	{
		if (s[counter] != c && flag == 1)
		{
			main_m[index] = get_str(&s[counter], c);
			if (main_m[index] == (void *)0)
				return (1);
			index++;
			flag = 0;
		}
		else if (s[counter] == c && flag == 0)
			flag = 1;
		counter++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	int		answ;
	char	**main_loc;

	if (!s)
		return ((void *)0);
	len = count_of_words(s, c);
	main_loc = malloc((len + 1) * sizeof(void *));
	if (main_loc == (void *)0)
		return ((void *)0);
	main_loc[len] = (void *)0;
	answ = write_mass(s, c, main_loc);
	if (answ == 1)
	{
		clean_line(main_loc);
		return ((void *)0);
	}
	return (main_loc);
}
