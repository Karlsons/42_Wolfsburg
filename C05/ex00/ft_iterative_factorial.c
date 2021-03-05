/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalnins <kkalnins@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:15:46 by kkalnins          #+#    #+#             */
/*   Updated: 2021/02/25 23:10:13 by kkalnins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int y;

	y = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--nb)
		y *= nb;
	return (y);
	