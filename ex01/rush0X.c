/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 14:51:03 by sbenet            #+#    #+#             */
/*   Updated: 2020/10/10 16:21:00 by sbenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

/*
** (w == 1 || w == width) = start or end of line
** (h == 1 || h == height) = top or bottom of colunm
*/

void	rush(int width, int height)
{
	int	w;
	int h;

	h = 0;
	while (h++ < height)
	{
		w = 0;
		while (w++ < width)
		{
			if (h == 1 && (w == 1 || w == width))
				ft_putchar('D');
			else if (h == height)
				ft_putchar('C');
			else if (w == 1 || w == width)
				ft_putchar('B');
			else if (h == 1 || h == height)
				ft_putchar('A');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

