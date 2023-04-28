/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:19:46 by dimarque          #+#    #+#             */
/*   Updated: 2023/04/28 19:00:06 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/* void ra(stack_t **a, int i)
{
	stack_t *first_list;
	stack_t *rotate_list;
	stack_t *last_list;

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
} */