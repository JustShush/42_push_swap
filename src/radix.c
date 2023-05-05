/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:39:56 by dimarque          #+#    #+#             */
/*   Updated: 2023/05/05 17:55:52 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	bin_converter(int dec)
{
	int	bin;
	int	i;

	bin = 0;
	i = 1;
	while (dec != 0)
	{
		bin += (dec % 2) * i;
		dec /= 2;
		i *= 10;
	}
	return (bin);
}

/* void	radix(t_stack **a, t_stack **b)
{
	
} */
