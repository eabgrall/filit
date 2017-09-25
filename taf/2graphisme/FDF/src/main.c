/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:26:30 by eabgrall          #+#    #+#             */
/*   Updated: 2017/09/25 17:28:23 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

int		on_key(int keycode, void *param)
{
	int		x;
	int		y;

	(void)param;
	printf("event : %d\n", keycode);
	if (keycode == 53)
		exit(0);
	if (keycode == 2)
	{
		while (x)
	}
	return (0);
}

int		main(int ac, char **av)
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 900, 900, "fdf");
	y = 50;
	while (y < 350)
	{
		x = 50;
		while (x < 100)
		{
			mlx_pixel_put(mlx, win, x, y, 0xFFFFFF);
			x++;
		}
		y++;
	}
	mlx_key_hook(win, on_key, 0);
	mlx_loop(mlx);
	ac = 0;
	av = 0;
	ft_putstr(BONJOUR);
	return (0);
}
