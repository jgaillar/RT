/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:32:33 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 14:12:33 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	two(t_stuff *e)
{
	ft_init_value_two(e, 7);
	ft_arc(e, 3);
	e->bs.ray_arc--;
	ft_arc(e, 3);
	e->bs.ray_arc--;
	ft_arc(e, 3);
	ft_init_value_two(e, 8);
	ft_segment_letter(e);
	ft_init_value_two(e, 9);
	ft_segment_letter(e);
	ft_init_value_two(e, 10);
	ft_segment_letter(e);
	ft_init_value_two(e, 11);
	ft_segment_letter(e);
	ft_init_value_two(e, 12);
	ft_segment_letter(e);
	ft_init_value_two(e, 13);
	ft_segment_letter(e);
}
