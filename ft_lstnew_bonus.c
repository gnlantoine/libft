/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:38:13 by aguenel           #+#    #+#             */
/*   Updated: 2019/10/23 14:13:29 by aguenel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = NULL;
	if (!(lst = malloc(sizeof(t_list))))
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
