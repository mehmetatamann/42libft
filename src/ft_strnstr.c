/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:23:19 by mataman           #+#    #+#             */
/*   Updated: 2022/11/25 17:25:23 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;

	if (!*needle)
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	while (*haystack && n-- >= ft_strlen(needle))
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			i++;
			if (!needle[i])
				return ((char *)(haystack));
		}
		haystack++;
	}
	return (NULL);
}
