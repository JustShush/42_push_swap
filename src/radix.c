/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:39:56 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/16 15:51:44 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

// convert all numbers to binary
int	bin_converter(int dec, int i)
{
	int	tmp;
	int	j;

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

// radix sort
void	radix(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	n;

	j = 0;
	n = ft_lstsize(a);
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
// j = the position of the number to pass to the other side