/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:38:40 by pavicent          #+#    #+#             */
/*   Updated: 2025/07/31 13:38:42 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_new_node(t_list *lst, size_t size)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
	{
		ft_my_alloc(0, 0);
		ft_putstr_fd("malloc error\n", 2);
		exit (1);
	}
	node->content = ft_calloc(1, size);
	if (!node->content)
	{
		ft_my_alloc(0, 0);
		free(node);
		ft_putstr_fd("malloc error\n", 2);
		exit (1);
	}
	node->next = NULL;
	ft_lstadd_back(&lst, node);
	return (node->content);
}

void	*ft_my_alloc(size_t size, int mode)
{
	static t_list	*lst;

	if (mode == 0)
	{
		ft_lstclear(&lst, free);
		return (NULL);
	}
	else
		return (ft_new_node(lst, size));
}
