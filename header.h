/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:19:34 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/03 18:04:43 by dimarque         ###   ########.fr       */
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

typedef struct s_stacks
{
	int		count_a;
	int		count_b;
	int		min;
	int		max;
	int		med;
	t_stack	**a;
	t_stack	b;
}	t_stacks;

void	ft_error(void);

// in actions.c
void	sa(t_stack **a, int i);
void pa(t_stack *a, t_stack *b, int i);
void pb(t_stack *a, t_stack *b, int i);
// -------------------

// in actions2.c
void	ra(t_stack **a, int i);
void	rb(t_stack **a, int i);
// -------------------

// in actions3.c
void	rra(t_stack **a, int i);
// -------------------

// in create_stack.c
void	check_type(int argc, t_stack **a,  t_stack **b);
void	create_stack(t_stack **a, char *argv[]);
// -------------------

// in parse
int		parse(int argc, char *argv[]);
int		ft_atoi(const char *str);
// -------------------

// in sort.c
void	simple(t_stack **a);
void	cinco(t_stack **a, t_stack **b);
// -------------------

#endif