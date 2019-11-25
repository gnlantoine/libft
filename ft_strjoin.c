/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:56:29 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/21 18:12:59 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	i;
	size_t	j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	r = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!r)
		return (NULL);
	i = -1;
	while (s1[++i])
		r[i] = s1[i];
	j = -1;
	while (s2[++j])
		r[i + j] = s2[j];
	r[i + j] = '\0';
	return (r);
}
