/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:35:58 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/16 17:37:06 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char*)s + i);
	while (--i >= 0)
		if (s[i] == c)
			return ((char*)s + i);
	return (0);
}
