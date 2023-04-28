/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:19:34 by dimarque          #+#    #+#             */
/*   Updated: 2023/04/28 18:57:04 by dimarque         ###   ########.fr       */
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
	int data;
	int step;
	int rotate;
	struct s_stack *next;
} stack_t;

typedef struct s_stacks
{
	int count_a;
	int count_b;
	int min;
	int max;
	int med;
	stack_t stack;
} stacks_t;

void ft_error();

// in parse
int parse(int argc, char *argv[]);
int ft_atoi(const char *str);
// -------------------

#endif