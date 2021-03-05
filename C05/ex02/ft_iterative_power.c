/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalnins <kkalnins@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:16:23 by kkalnins          #+#    #+#             */
/*   Updated: 2021/02/24 22:47:31 by kkalnins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int y;

	y = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (--power)
		y *= nb;
	return (y);
}
