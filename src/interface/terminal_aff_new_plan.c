/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_aff_new_plan.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 10:17:17 by prossi            #+#    #+#             */
/*   Updated: 2018/04/17 14:08:25 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	aff_new_plan_fih(t_stuff *e)
{
	if (e->i.nobj.first == 12)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Rayon ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 400, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
}

void	aff_new_plan_fh(t_stuff *e)
{
	if (e->i.nobj.first == 9)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Refrac ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 400, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	else if (e->i.nobj.first == 10)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Conscol ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 390, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	else if (e->i.nobj.first == 11)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Reflex ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 400, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	aff_new_plan_fih(e);
}

void	aff_new_plan_td(t_stuff *e)
{
	if (e->i.nobj.first == 6)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Couleur R ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 360, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	else if (e->i.nobj.first == 7)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Couleur G ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 360, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	else if (e->i.nobj.first == 8)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Couleur B ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 360, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	aff_new_plan_fh(e);
}

void	aff_new_plan_sd(t_stuff *e)
{
	if (e->i.nobj.first == 3)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Direction en X ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 320, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	else if (e->i.nobj.first == 4)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Direction en Y ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 320, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	else if (e->i.nobj.first == 5)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Direction en Z ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 320, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	aff_new_plan_td(e);
}

void	aff_new_plan(t_stuff *e)
{
	if (e->i.nobj.first == 0)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Position en X ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 320, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	else if (e->i.nobj.first == 1)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Position en Y ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 320, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	else if (e->i.nobj.first == 2)
	{
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, 15, (WIN_Y - LENGTH) * \
		3 + 3 * 40, 0xFFFFFF, "Position en Z ? : ");
		mlx_string_put(e->img.mlx_ptr, e->img.win_ptr, WIN_X - WIDTH - 320, \
			(WIN_Y - LENGTH) * 3 + 3 * 40, 0xFFFFFF, e->i.term.wbuf);
	}
	aff_new_plan_sd(e);
}
