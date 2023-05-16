/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:20:35 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/16 15:57:05 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sa(t_stack **a, int i)
{
	int	tmp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	tmp = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = tmp;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack **b, int i)
{
	int	tmp;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	tmp = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = tmp;
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b, int i)
{
	sa(a, 0);
	sb(b, 0);
	if (i == 1)
		write(1, "ss\n", 3);
}

void	pa(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if ((*b) == NULL)
		return ;
	tmp = (*b);
	(*b) = (*b)->next;
	tmp->next = (*a);
	(*a) = tmp;
	if (i == 1)
		write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	tmp = (*a);
	(*a) = (*a)->next;
	tmp->next = (*b);
	(*b) = tmp;
	if (i == 1)
		write(1, "pb\n", 3);
}
