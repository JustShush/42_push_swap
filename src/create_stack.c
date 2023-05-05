/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:22:00 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/05 17:58:05 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

// what type of sorting i will be using
void	check_type(int argc, t_stack **a,  t_stack **b)
{
	(void)b;
	if(argc - 1 <= 3)
		simple(a);
	else if (argc - 1 <= 5)
		cinco(a, b);
	/* else
		radix(a, b); */
}

void	create_stack(t_stack **a, char *argv[])
{
	t_stack	*new_node;
	int i;

	i = 1;
	while (argv[i] != NULL)
	{
		new_node = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(a, new_node);
		//printf("data: %d\n", new_node->data);
		i++;
	}
}