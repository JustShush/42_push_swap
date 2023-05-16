/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:19:40 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/16 15:57:48 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	main(int argc, char *argv[])
{
	t_stack	**a;
	t_stack	**b;
	int		i;

	i = 1;
	if (!(argc > 1))
		return (0);
	if (parse(argc, argv) != 1)
		return (0);
	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	*a = NULL;
	*b = NULL;
	create_stack(a, argv, argc);
	check_type(argc, a, b);
	freestack(a);
	freestack(b);
	return (0);
}
