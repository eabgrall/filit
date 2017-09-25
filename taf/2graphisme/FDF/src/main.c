/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:26:30 by eabgrall          #+#    #+#             */
/*   Updated: 2017/09/25 17:56:05 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

int		on_key(int keycode, void *param)
{
//	int		x;
//	int		y;

	(void)param;
	printf("event : %d\n", keycode);
	if (keycode == 53)
		exit(0);
	if (keycode == 2)
	{
		exit(0);
/*		y = 100;
		while (y < 800)
		{
			x = 100;
			while (x < 800)
			{
				mlx_pixel_put(param->mlx, param->win, x, y, 0xDA00FF);
				x++;
			}
			y = y + 3;
		}*/
	}
	return (0);
}

int		main(int ac, char **av)
{
	void	*mlx;
	void	*win;
	t_param	param;
	int		x;
	int		y;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 900, 900, "fdf");
	param.mlx = mlx;
	param.win = win;
	y = 100;
	while (y < 800)
	{
		x = 100;
		while (x < 800)
		{
			mlx_pixel_put(param.mlx, param.win, x, y, 0x9900CC);
			x++;
		}
		y = y + 5;
	}
	mlx_key_hook(win, on_key, &param);
	mlx_loop(mlx);
	ac = 0;
	av = 0;
	ft_putstr(BONJOUR);
	return (0);
}
