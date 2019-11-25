/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:54:11 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/21 19:25:14 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		k;
	char	*str;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
		i++;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[j - 1]) != NULL && j > i)
		j--;
	if (!(str = (char *)malloc(j - i + 1)))
		return (NULL);
	while (i < j && s1[i])
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
