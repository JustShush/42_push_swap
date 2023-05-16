/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:10:01 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/16 15:55:22 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

// a(first position) a->n(second position) a->n->n(last position)
void	simple(t_stack **a)
{
	int	first;
	int	mid;
	int	last;

	first = (*a)->data;
	mid = (*a)->next->data;
	last = (*a)->next->next->data;
	if (last > first && mid > last)
	{
		rra(a, 1);
		sa(a, 1);
	}
	else if (first > mid && last > first)
		sa(a, 1);
	else if (mid > last && first > mid)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (first > last && mid > first)
		rra(a, 1);
	else if (last > mid && first > last)
		ra(a, 1);
}
/* 1 3 2
// 2 1 3
// 3 2 1
// 2 3 1
// 3 1 2 */

int	bb(t_stack **a)
{
	t_stack	*tmp;
	int		res;

	tmp = *a;
	res = tmp->data;
	while (tmp && tmp->next)
	{
		if (res > tmp->next->data && tmp->next)
			res = tmp->next->data;
		tmp = tmp->next;
	}
	return (res);
}

// check mim number position
int	parsi(t_stack **a)
{
	t_stack	*tmp;
	int		i;

	tmp = *a;
	i = 0;
	while (i < 5)
	{
		if (tmp->data == bb(a))
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	cinco(t_stack **a, t_stack **b)
{
	int	m;
	int	i;

	i = 0;
	if (ft_lstsize(a) == 4)
		i++;
	while (i < 2)
	{
		m = parsi(a);
		while ((*a)->data != bb(a))
		{
			if (m >= 3)
				rra(a, 1);
			else
				ra(a, 1);
		}
		pb(a, b, 1);
		i++;
	}
	simple(a);
	pa(a, b, 1);
	pa(a, b, 1);
}
// 2 3 5 4 1
