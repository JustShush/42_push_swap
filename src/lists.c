/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:07:05 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/16 15:50:26 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_lstsize(t_stack **lst)
{
	int		i;
	t_stack	*tmp;

	tmp = *lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_stack	*ft_lstnew(int content)
{
	t_stack	*head;

	head = malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->data = content;
	head->next = NULL;
	return (head);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		else
			lst = lst->next;
	}
	return (0);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	tmp = *lst;
	if (ft_lstlast(*lst))
		ft_lstlast(tmp)->next = new;
	else
		*lst = new;
}
