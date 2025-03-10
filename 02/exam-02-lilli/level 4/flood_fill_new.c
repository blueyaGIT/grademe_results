/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkloters <lkloters@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:06:54 by lkloters          #+#    #+#             */
/*   Updated: 2025/01/23 12:11:42 by lkloters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.x < 0 || cur.y < 0 || cur.x >= size.x || cur.y >= size.y || tab[cur.y][cur.x] != to_fill)
		return ;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.y, cur.x - 1}, to_fill);
	fill(tab, size, (t_point){cur.y, cur.x + 1}, to_fill);
	fill(tab, size, (t_point){cur.y - 1, cur.x}, to_fill);
	fill(tab, size, (t_point){cur.y + 1, cur.x}, to_fill);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
