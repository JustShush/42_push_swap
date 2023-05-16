/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:22:00 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/16 15:59:54 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

// what type of sorting i will be using
void	check_type(int argc, t_stack **a, t_stack **b)
{
	(void)b;
	if (argc - 1 == 2)
		sa(a, 1);
	else if (argc - 1 == 3)
		simple(a);
	else if (argc - 1 <= 5)
		cinco(a, b);
	else
		radix(a, b);
}

void	create_stack(t_stack **a, char *argv[], int argc)
{
	int	i;
	int	n;
	int	j;

	i = 1;
	while (i < argc)
	{
		n = 1;
		j = 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) > ft_atoi(argv[j]))
				n++;
			j++;
		}
		ft_lstadd_back(a, ft_lstnew(n));
		i++;
	}
}
