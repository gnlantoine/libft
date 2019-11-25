/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:45:37 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/21 19:03:39 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int				p;
	unsigned int	i;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			p = 1;
			while (needle[p] != '\0' && haystack[i + p]
				== needle[p] && (size_t)(i + p) < len)
				p++;
			if (needle[p] == '\0')
				return ((char*)&haystack[i]);
		}
		++i;
	}
	return (0);
}
