/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:36:13 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/28 14:04:41 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

unsigned int	ft_size(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	j = ft_size(n);
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (NULL);
	i = n;
	str[j] = '\0';
	while (j--)
	{
		if (n < 0)
			n = -n;
		str[j] = (n % 10 + '0');
		n = n / 10;
	}
	if (i < 0)
		str[0] = '-';
	return (str);
}
