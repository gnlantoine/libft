/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:08:13 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/21 19:23:07 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	size;
	int	i;

	if (!s || !fd)
		return ;
	size = ft_strlen(s);
	i = 0;
	while (i < size)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
