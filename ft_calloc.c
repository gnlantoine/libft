/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:12:47 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/21 19:13:47 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (!(tab = (void*)malloc(size * count)))
		return (NULL);
	ft_bzero(tab, size * count);
	return (tab);
}
