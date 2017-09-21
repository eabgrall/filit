/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:26:30 by eabgrall          #+#    #+#             */
/*   Updated: 2017/09/21 20:13:09 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		on_key(int keycode, void *param)
{

}

int		main(int ac, char **av)
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 400, 400, "fdf");
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
	mlx_loop(mlx);
	ac = 0;
	av = 0;
	ft_putstr(BONJOUR);
	return (0);
}
