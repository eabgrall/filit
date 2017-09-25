/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 16:22:03 by eabgrall          #+#    #+#             */
/*   Updated: 2017/09/25 19:23:03 by eabgrall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		put_segment()
{
	a = (y2 - y1)/(x2 - x1);
	b = y1 - a * x1;
	while (x1 < x2)
	{
		put_pixel..;
			if ()
			{
			}
		x1++;
	}
}

excerSegment(entier x1, entier y1, entier x2, entier y2) est
déclarer entier x, y, dx, dy ;
déclarer rationnel e, e(1,0), e(0,1) ;  // valeur d’erreur et incréments
dy ← y2 - y1 ;
dx ← x2 - x1 ;
y ← y1 ;  // rangée initiale
e ← 0,0 ;  // valeur d’erreur initiale
e(1,0) ← dy / dx ;
e(0,1) ← -1.0 ;
pour x variant de x1 jusqu’à x2 par incrément de 1 faire
tracerPixel(x, y) ;
si (e ←  e + e(1,0)) ≥ 0,5 alors  // erreur pour le pixel suivant de même rangée
y ←  y + 1 ;  // choisir plutôt le pixel suivant dans la rangée supérieure
e ←  e + e(0,1) ;  // ajuste l’erreur commise dans cette nouvelle rangée
fin si ;
fin pour ;
fin procédure ;it(0);

a =(double) (yf-yi)/(xf-xi) ;
b = yi - a * xi ;
for ( x = xi ; x <= xf ; x++ ) {
	y =(int) (a * x + b) ;
	allume_pixel(x,y) ; }
