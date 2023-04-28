/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:20:35 by dimarque          #+#    #+#             */
/*   Updated: 2023/04/28 19:00:03 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/* void	sa(stack_t *a, int i)
{
	int	tmp;

	if (a == NULL || a->next == NULL)
		return ;
	tmp = a->data;
	a->data = a->next->data;
	a->next->data = tmp;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	sb(stack_t *b, int i)
{
	int	tmp;

	if (b == NULL || b->next == NULL)
		return ;
	tmp = b->data;
	b->data = b->next->data;
	b->next->data = tmp;
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ss(stacks_t *s, int i)
{
	sa(s->a, 0);
	sb(s->b, 0);
	if (i == 1)
		write(1, "ss\n", 3);
}

void	pa(stacks_t *s, int i)
{
	stack_t *tmp;

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
	stack_t *tmp;

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
}
 */