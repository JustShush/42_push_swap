/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:39:56 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/12 19:27:02 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	bin_converter(int dec, int i)
{
	int tmp;
	int j;

	j = 0;
	tmp = dec;
	while (j < i)
	{
		tmp /= 2;
		j++;
	}
	if (tmp % 2 == 0)
		return (0);
	return (1);
}

// get lowest number and set it to 0 then do the next lowest number and ++ until the end
void	numb(t_stack **a)
{
	t_stack *tmp;
	t_stack *temp1;
	int pos;
	
	pos = 0;
	tmp = (*a)->next;
	temp1 = *a;
	while (temp1 != NULL)
	{
		while (tmp != NULL)
		{
			if (temp1->data > tmp->data)
				pos++;
			tmp = tmp->next;
		}
		tmp = (*a);
		temp1->data = pos;
		temp1 = temp1->next;
		pos = 0;
	}
	//return (temp1);
}

void	radix(t_stack **a, t_stack **b)
{
	int i;
	int j;
	int n;

	j = 0;
	n = ft_lstsize(a);
	numb(a);
	while (!(check_sorted(a)))
	{
		i = 0;
		while (i < n)
		{
			if (bin_converter((*a)->data, j) == 1)
				ra(a, 1);
			else if (bin_converter((*a)->data, j) == 0)
				pb(a, b, 1);
			i++;
		}
		while (*b)
			pa(a, b, 1);
		j++;
	}
}
// loc = the position of the number to pass to the other side