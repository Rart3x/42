/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:53:43 by jduval            #+#    #+#             */
/*   Updated: 2022/10/05 11:42:13 by jduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ndest;
	unsigned char	*nsrc;
	size_t			i;

	ndest = (unsigned char *) dest;
	nsrc = (unsigned char *) src;
	if (dest > src)
	{
		i = 0;
		while (i < n)
		{
			ndest[n - i - 1] = nsrc[n - i - 1];
			i++;
		}
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}
