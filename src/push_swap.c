/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:19:40 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/05 17:26:07 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	main(int argc, char *argv[])
{
	t_stack	**a;
	t_stack	**b;
	int i;

	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	*a = NULL;
	*b = NULL;
	i = 1;

	if (!(argc > 1))
		return (0);
	if (parse(argc, argv) != 1)
		return (0);
	create_stack(a, argv);
	check_type(argc, a, b);
	freestack(a);
	freestack(b);
	return (0);
}
