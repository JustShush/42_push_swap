/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:58:39 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/16 16:26:15 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	numb;
	int			i;

	sign = 1;
	numb = 0;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	if ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			ft_error();
		numb = numb * 10 + str[i] - 48;
		i++;
	}
	if (numb * sign > INT_MAX || numb * sign < INT_MIN)
		ft_error();
	return (numb * sign);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	char			a;
	char			b;

	i = 0;
	a = s1[i];
	b = s2[i];
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
		a = s1[i];
		b = s2[i];
	}
	return (a - b);
}

// Check if there is a Duplicated number
int	ft_dup(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	sorted(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	parse(int argc, char *argv[])
{
	int	j;

	j = 1;
	if (ft_dup(argc, argv) != 0)
		ft_error();
	if ((sorted(argc, argv)))
		return (0);
	while (j < argc)
	{
		ft_atoi(argv[j]);
		j++;
	}
	return (1);
}
