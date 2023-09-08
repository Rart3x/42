/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kramjatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:19:48 by kramjatt          #+#    #+#             */
/*   Updated: 2023/01/10 20:19:48 by kramjatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*swap;
	unsigned char	*swap_dest;

	swap = (unsigned char *)src;
	swap_dest = (unsigned char *)dest;
	i = 0;
	if (swap_dest == NULL && swap == NULL)
		return (0);
	while (i < n)
	{
		swap_dest[i] = swap[i];
		i++;
	}
	return (dest = swap_dest);
}
