/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:19:46 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/03 16:29:16 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void ra(t_stack **a, int i)
{
	t_stack *first_list;
	t_stack *rotate_list;
	t_stack *last_list;

	if ((*a) == NULL || (*a)->next == NULL)
		return;
	rotate_list = *a;
	first_list = (*a)->next;
	last_list = *a;
	while (last_list->next != NULL)
		last_list = last_list->next;
	rotate_list->next = NULL;
	last_list->next = rotate_list;
	*a = first_list;
	if (i == 1)
		write(1, "ra\n", 3);
}

void rb(t_stack **a, int i)
{
	t_stack *first_list;
	t_stack *rotate_list;
	t_stack *last_list;

	if ((*a) == NULL || (*a)->next == NULL)
		return;
	rotate_list = *a;
	first_list = (*a)->next;
	last_list = *a;
	while (last_list->next != NULL)
		last_list = last_list->next;
	rotate_list->next = NULL;
	last_list->next = rotate_list;
	*a = first_list;
	if (i == 1)
		write(1, "ra\n", 3);
}
