/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kramjatt <kramjatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:20:47 by kramjatt          #+#    #+#             */
/*   Updated: 2023/08/17 18:01:30 by kramjatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3D.h"	

static void	verif_map(t_vars *struc)
{
	if (verif_components(struc->map) == false)
		error_component(struc);
	if (verif_closed_map(struc->map) == false)
		error_closed_map(struc);
	if (verif_player_pos(struc->map) == false)
		error_player_pos(struc);
}

void	verif(t_vars *struc)
{
	verif_map(struc);
	verif_texture_format(struc);
	verif_texture_cub(struc);
	verif_rgb(struc);
}
