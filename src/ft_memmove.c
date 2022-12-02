/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataman <mataman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:49:18 by mataman           #+#    #+#             */
/*   Updated: 2022/10/21 13:45:08 by mataman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*msrc;
	char	*mdst;
	size_t	i;

	msrc = (char *)src;
	mdst = (char *)dst;
	i = 0;
	if (msrc < mdst)
	{
		while (len--)
		{
			mdst[len] = msrc[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
