/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_value_draw_title_background.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 14:51:26 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 16:14:13 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	ft_init_value_draw_title_background_td(t_stuff *e, int option)
{
	if (option == 6)
	{
		e->lt.posx = WIN_X - WIDTH - 145;
		e->lt.posy = WIN_Y - LENGTH - 85;
		e->lt.coeff = 0.35;
		e->lt.couleur = e->i.color.cobj.col3;
		e->lt.space = 40;
	}
}

void	ft_init_value_draw_title_background_sd(t_stuff *e, int option)
{
	if (option == 3)
	{
		e->lt.posx = 37;
		e->lt.posy = 103;
		e->lt.coeff = 0.40;
		e->lt.couleur = e->i.color.cobj.col3;
		e->lt.space = 40;
	}
	if (option == 4)
	{
		e->lt.posx = 5;
		e->lt.posy = WIN_Y - LENGTH - 85;
		e->lt.coeff = 0.35;
		e->lt.couleur = e->i.color.cobj.col3;
		e->lt.space = 40;
	}
	if (option == 5)
	{
		e->lt.posx = WIN_X - WIDTH - 145;
		e->lt.posy = 103;
		e->lt.coeff = 0.35;
		e->lt.couleur = e->i.color.cobj.col3;
		e->lt.space = 40;
	}
	ft_init_value_draw_title_background_td(e, option);
}

void	ft_init_value_draw_title_background(t_stuff *e, int option)
{
	if (option == 0)
	{
		e->lt.posx = 200;
		e->lt.posy = 60;
		e->lt.coeff = 0.40;
		e->lt.couleur = e->i.color.cobj.col3;
		e->lt.space = 40;
	}
	if (option == 1)
	{
		e->lt.posx = 190;
		e->lt.posy = 150;
		e->lt.coeff = 0.40;
		e->lt.couleur = e->i.color.cobj.col3;
		e->lt.space = 40;
	}
	if (option == 2)
	{
		e->lt.posx = 205;
		e->lt.posy = 240;
		e->lt.coeff = 0.40;
		e->lt.couleur = e->i.color.cobj.col3;
		e->lt.space = 40;
	}
	ft_init_value_draw_title_background_sd(e, option);
}
