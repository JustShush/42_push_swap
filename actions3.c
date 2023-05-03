/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:06:59 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/03 16:07:09 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rra(t_stack **a, int i)
{
	t_stack *first_list;
	t_stack *rotate_list;
	t_stack *penultima_list;

	if ((*a) == NULL || (*a)->next == NULL)
		return;
	first_list = *a;
	penultima_list = *a;
	while (penultima_list->next->next != NULL)
		penultima_list = penultima_list->next;
	rotate_list = penultima_list->next;
	penultima_list->next = NULL;
	rotate_list->next = first_list;
	*a = rotate_list;
	if (i == 1)
		write(1, "rra\n", 4);
}
