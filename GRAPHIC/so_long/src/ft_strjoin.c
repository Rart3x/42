/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kramjatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:39:32 by kramjatt          #+#    #+#             */
/*   Updated: 2023/01/17 17:16:31 by kramjatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*value;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	value = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (value == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		value[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		value[i] = s2[j];
		i++;
		j++;
	}
	value[i] = '\0';
	return (value);
}
