/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalnins <kkalnins@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 16:17:49 by kkalnins          #+#    #+#             */
/*   Updated: 2021/02/17 16:16:14 by kkalnins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int reverse;
	int temp;

	i = 0;
	reverse = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[reverse];
		tab[reverse] = temp;
		i++;
		reverse--;
	}
}
