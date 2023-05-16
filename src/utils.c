/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:07:58 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/16 15:49:53 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	freestack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	free(stack);
}

int	check_sorted(t_stack **stack)
{
	t_stack	*buf;

	buf = (*stack);
	while (buf && buf->next)
	{
		if (buf->data < buf->next->data)
			buf = buf->next;
		else
			return (0);
	}
	return (1);
}
