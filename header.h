/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:19:34 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/16 15:33:10 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# define INT_MAX 2147483647
# define INT_MIN -2147483648

// -------------------------------
// remove this
# include <stdio.h>
// -------------------------------

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

void	ft_error(void);

// in actions.c
void	sa(t_stack **a, int i);
void	pa(t_stack **a, t_stack **b, int i);
void	pb(t_stack **a, t_stack **b, int i);
// -------------------

// in actions2.c
void	ra(t_stack **a, int i);
void	rb(t_stack **a, int i);
// -------------------

// in actions3.c
void	rra(t_stack **a, int i);
// -------------------

// in create_stack.c
void	check_type(int argc, t_stack **a, t_stack **b);
void	create_stack(t_stack **a, char *argv[], int argc);
// -------------------

// in lists.c
int		ft_lstsize(t_stack **lst);
t_stack	*ft_lstnew(int content);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
// -------------------

// in parse
int		sorted(int argc, char *argv[]);
int		parse(int argc, char *argv[]);
int		ft_atoi(const char *str);
// -------------------

// in radix.c
int		bin_converter(int dec, int i);
void	radix(t_stack **a, t_stack **b);
// -------------------

// in sort.c
void	simple(t_stack **a);
void	cinco(t_stack **a, t_stack **b);
// -------------------

// in utils.c
int		check_sorted(t_stack **stack);
void	freestack(t_stack **stack);
// -------------------

#endif