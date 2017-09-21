/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:33:04 by eabgrall          #+#    #+#             */
/*   Updated: 2017/09/21 20:12:32 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../libft/libft.h"
# include "../minilibx_macos/mlx.h"
# include <fcntl.h>

#define BONJOUR "bonjour"

typedef struct		s_param
{
	void			*mlx;
	void			*win;
	int				x;
	int				y;
	struct s_param	*next;
}					t_param;

/*
**	=== main.c ===
*/
int		on_key(int keycode, void *param);

#endif
