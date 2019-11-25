/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:16:39 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/23 19:01:47 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t size_src;

	i = 0;
	size_src = 0;
	if (!(dest || src))
		return (size_src);
	while (src[size_src] != '\0')
	{
		++size_src;
	}
	if (size == 0)
		return (size_src);
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size_src);
}
