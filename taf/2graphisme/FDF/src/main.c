/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:26:30 by eabgrall          #+#    #+#             */
/*   Updated: 2017/09/25 18:10:16 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

int		on_key(int keycode, t_param *param)
{
	int		x;
	int		y;

	printf("event : %d\n", keycode);
	if (keycode == 53)
		exit(0);
	if (keycode == 2)
	{
		y = 97;
		while (y < 800)
		{
			x = 100;
			while (x < 800)
			{
				mlx_pixel_put(param->mlx, param->win, x, y, 0xAAFF00);
				x++;
			}
			y = y + 6;
		}
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
		y = y + 6;
	}
	mlx_key_hook(win, on_key, &param);
	mlx_loop(mlx);
	ac = 0;
	av = 0;
	ft_putstr(BONJOUR);
	return (0);
}
