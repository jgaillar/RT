/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgba_to_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 22:22:51 by prossi            #+#    #+#             */
/*   Updated: 2018/04/16 21:54:19 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

unsigned long	rgba_to_hexa(int r, int g, int b, int a)
{
	return (((r & 0xff) << 24) + ((g & 0xff) << 16) + ((b & 0xff) << 8) + \
	(a & 0xff));
}
