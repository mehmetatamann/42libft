/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:10:40 by mataman           #+#    #+#             */
/*   Updated: 2022/12/01 17:41:05 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	out_length(const char *str, char c)
{
	int		i;
	int		is_new_word;

	i = 0;
	is_new_word = 0;
	while (*str)
	{
		if (*str != c && is_new_word == 0)
		{
			is_new_word = 1;
			i++;
		}
		else if (*str == c)
			is_new_word = 0;
		str++;
	}
	return (i);
}

char	**ft_split(char const *str, char c)
{
	char			**output;
	unsigned int	start;
	unsigned int	end;
	int				j;

	output = (char **)malloc(sizeof(*output) * (out_length(str, c) + 1));
	if (!str || !output)
		return (0);
	start = 0;
	end = 0;
	j = 0;
	while (str[end])
	{
		if (str[end] == c)
		{
			if (end - start > 0)
					output[j++] = ft_substr(str, start, end - start);
			start = end + 1;
		}
		end++;
	}
	if (end - start > 0)
		output[j++] = ft_substr(str, start, end - start);
	output[j] = 0;
	return (output);
}
