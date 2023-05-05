/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:20:35 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/05 15:49:16 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sa(t_stack **a, int i)
{
	int	tmp;

	if(*a == NULL || (*a)->next == NULL)
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

void pa(t_stack **a, t_stack **b, int i)
{
	t_stack *tmp;

	if ((*b) == NULL)
		return;
	tmp = (*b);
	(*b) = (*b)->next;
	tmp->next = (*a);
	(*a) = tmp;
	if (i == 1)
		write(1, "pa\n", 3);
}

void pb(t_stack **a, t_stack **b, int i)
{
	t_stack *tmp;

	/* if (a == NULL)
		return; */
	tmp = (*a);
	(*a) = (*a)->next;
	tmp->next = (*b);
	(*b) = tmp;
	if (i == 1)
		write(1, "pb\n", 3);
}

/* void	ss(stacks_t *s, int i)
{
	sa(s->a, 0);
	sb(s->b, 0);
	if (i == 1)
		write(1, "ss\n", 3);
}

void	pa(stacks_t *s, int i)
{
	t_stack *tmp;

	if (s->b == NULL)
		return;
	s->count_a += 1;
	s->count_b -= 1;
	tmp = s->b;
	s->b = s->b->next;
	tmp->next = s->a;
	s->a = tmp;
	if (i == 1)
		write(1, "pa\n", 3);
}

void pb(stacks_t *s, int i)
{
	t_stack *tmp;

	if (s->a == NULL)
		return;
	s->count_a -= 1;
	s->count_b += 1;
	tmp = s->a;
	s->a = s->a->next;
	tmp->next = s->b;
	s->b = tmp;
	if (i == 1)
		write(1, "pb\n", 3);
} */
