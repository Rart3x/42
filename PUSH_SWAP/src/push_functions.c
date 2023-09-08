/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kramjatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:44:06 by kramjatt          #+#    #+#             */
/*   Updated: 2023/01/19 16:10:29 by kramjatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_parsed *a, t_parsed *b)
{
	int	i;

	if (b->tab == NULL)
		return ;
	i = a->tab_size;
	while (i > 0)
	{
		a->tab[i] = a->tab[i - 1];
		i--;
	}
	a->tab_size++;
	a->tab[0] = b->tab[0];
	while (i < b->tab_size)
	{
		b->tab[i] = b->tab[i + 1];
		i++;
	}
	b->tab_size--;
	write(1, "pa\n", 3);
}

void	pb(t_parsed *a, t_parsed *b)
{
	int	i;

	if (a->tab == NULL)
		return ;
	i = b->tab_size;
	while (i > 0)
	{
		b->tab[i] = b->tab[i - 1];
		i--;
	}
	b->tab[0] = a->tab[0];
	b->tab_size++;
	i = 0;
	while (i < a->tab_size)
	{
		a->tab[i] = a->tab[i + 1];
		i++;
	}
	a->tab_size--;
	write(1, "pb\n", 3);
}
