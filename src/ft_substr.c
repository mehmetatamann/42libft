/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:51:40 by mataman           #+#    #+#             */
/*   Updated: 2022/12/01 17:55:03 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*my_str;
	size_t	counter;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	my_str = (char *)malloc(sizeof(char) * len + 1);
	if (!my_str)
		return (NULL);
	counter = 0;
	while (len--)
		my_str[counter++] = s[start++];
	my_str[counter] = '\0';
	return (my_str);
}
