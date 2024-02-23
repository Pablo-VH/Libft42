/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:24:43 by pavicent          #+#    #+#             */
/*   Updated: 2024/02/21 17:13:52 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*static void	ft_del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *lst = ft_lstnew("first");
	ft_lstdelone(lst, ft_del);
	printf("lst->content = %s\n", lst->content);
	return (0);
}*/