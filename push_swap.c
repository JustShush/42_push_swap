/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:19:40 by dimarque          #+#    #+#             */
/*   Updated: 2023/04/28 19:03:10 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

stack_t	*ft_lstnew(int content)
{
	stack_t	*head;

	head = malloc(sizeof(stack_t));
	if (!head)
		return (NULL);
	head->data = content;
	head->next = NULL;
	return (head);
}

stack_t	*ft_lstlast(stack_t *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		else
			lst = lst->next;
	}
	return (0);
}

void	ft_lstadd_back(stack_t **lst, stack_t *new)
{
	if (ft_lstlast(*lst))
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

void createStack(char *argv[]) {
	stack_t *new_node;
	stack_t **a;
	stack_t **b;

	a = malloc(sizeof(stacks_t));
	b = malloc(sizeof(stacks_t));

	*a = NULL;
	*b = NULL;
	int i;

	i = 1;
	while(argv[i] != NULL){
		new_node = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(a, new_node);
		printf("data: %d\n", new_node->data);
		i++;
	}
}

int main(int argc, char *argv[])
{

	if (!(argc > 1))
		return 0;
	parse(argc, argv);
	createStack(argv);

	return 0;
}