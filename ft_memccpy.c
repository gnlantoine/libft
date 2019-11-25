/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 09:04:14 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/16 15:37:26 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = -1;
	while (++i < n)
	{
		ptr[i] = ptr2[i];
		if (ptr[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
	}
	return (NULL);
}
