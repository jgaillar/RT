/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaillar <jgaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 16:14:48 by jgaillar          #+#    #+#             */
/*   Updated: 2018/04/13 14:56:00 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void		mouse_hook_sd(t_stuff *e)
{
	double color;

	if (e->c.obj == 0)
	{
		color = 0x6a74af;
		ft_putstr("SPHERE : ");
		ft_putnbr(e->c.objsph);
		e->i.each_obj = e->c.objsph;
		ft_putchar('\n');
	}
	else if (e->c.obj == 1)
	{
		color = 0xf3a1d1;
		ft_putstr("PLAN : ");
		ft_putnbr(e->c.objpla);
		e->i.each_obj = e->c.objpla;
		ft_putchar('\n');
	}
}

void		mouse_hook_td(t_stuff *e)
{
	double color;

	if (e->c.obj == 2)
	{
		color = 0xff5370;
		ft_putstr("CYLINDRE : ");
		ft_putnbr(e->c.objcyl);
		e->i.each_obj = e->c.objcyl;
		ft_putchar('\n');
	}
	else if (e->c.obj == 3)
	{
		color = 0x73d1c8;
		ft_putstr("CONE : ");
		ft_putnbr(e->c.objcone);
		e->i.each_obj = e->c.objcone;
		ft_putchar('\n');
	}
}

void		mouse_hook_qd(int x, int y, t_stuff *e)
{
	double color;

	if (e->c.obj == 4)
	{
		color = 0xff9966;
		ft_putstr("LIGHT : ");
		ft_putnbr(e->c.objlight);
		e->i.each_obj = e->c.objlight;
		ft_putchar('\n');
	}
	if (e->c.obj > -1)
		ft_segment(e, x, y, color);
	e->i.objet = e->c.obj;
	objet_courant(e);
	apercu_courant(e);
	create_obj(e);
}

int			mouse_hook(int button, int x, int y, t_stuff *e)
{
	if (button == 1 && (x >= (WIN_X - WIDTH) && x <= WIN_X) && \
			(y >= (WIN_Y - LENGTH) && y <= WIN_Y))
	{
		mlx_put_image_to_window(e->img.mlx_ptr, e->img.win_ptr, \
				e->img.img_ptr, WIN_X - WIDTH, WIN_Y - LENGTH);
		reboot_list_loop(e, 3);
		raydir(e, x - (WIN_X - WIDTH), y - (WIN_Y - LENGTH));
		check(e, &e->raydir, &e->poscam, 1);
		check_dist(e, 1);
		mouse_hook_sd(e);
		mouse_hook_td(e);
		mouse_hook_qd(x, y, e);
	}
	else if (button == 1 && ((x > 0 && x <= WIN_X && y > 0 && y \
					< WIN_Y - LENGTH) || (x > 0 && x < WIN_X - WIDTH && y \
						> 0 && y < WIN_Y)))
		mouse_hook_interface(e, x, y);
	return (0);
}
