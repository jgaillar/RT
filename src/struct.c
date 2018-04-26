/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <jgaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:09:32 by jgaillar          #+#    #+#             */
/*   Updated: 2018/04/13 14:49:59 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	create_image(t_stuff *e)
{
	e->img.img_ptr = mlx_new_image(e->img.mlx_ptr, WIDTH, LENGTH);
	e->img.data = mlx_get_data_addr(e->img.img_ptr,\
			&e->img.bits_per_pixel, &e->img.size_line, &e->img.endian);
}

void	ft_init_struct_opt_1(t_stuff *e)
{
	e->d.equal = 0;
	e->d.dot = 0;
	e->d.i = -1;
	e->d.nbmsph = 0;
	if (init_list_sph(&e->sph) == -1)
		exit(-1);
	e->d.nbmpla = 0;
	if (init_list_pla(&e->pla) == -1)
		exit(-1);
	e->d.nbmlight = 0;
	if (init_list_light(&e->light) == -1)
		exit(-1);
	e->d.nbmcyl = 0;
	if (init_list_cyl(&e->cyl) == -1)
		exit(-1);
	e->d.nbmcone = 0;
	if (init_list_cone(&e->cone) == -1)
		exit(-1);
}

void	ft_init_struct_sd(t_stuff *e)
{
	e->i.perlin = 0;
	e->i.perlin_stain = 0.1;
	e->i.wave = 0;
	e->i.reflex = 0;
	e->i.refrac = 0;
	e->i.damier = -1;
	e->tex.act_skybox = 0;
	grad_tab(&e->p);
	perlin_tab(&e->p);
}

void	ft_init_struct(t_stuff *e, int option)
{
	if (option == 0)
	{
		e->b.y = -1;
		e->b.tabd = NULL;
		e->b.i = 0;
	}
	if (option == 1)
		ft_init_struct_opt_1(e);
	if (option == 2)
	{
		e->c.distvue = 1;
		e->c.longvue = 0.3;
		e->c.largvue = 0.5;
		e->c.i = 0;
		e->pix = 0;
		reboot_list(e);
		e->c.n = -1;
		e->m.angle = 0;
		e->m.value = 0;
		e->m.axe = '\0';
		e->m.type = '\0';
		e->m.type_sujet = 0;
		e->i.first = 0;
		ft_init_struct_sd(e);
	}
}
