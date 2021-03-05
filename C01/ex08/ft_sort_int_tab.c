/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalnins <kkalnins@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 09:47:41 by kkalnins          #+#    #+#             */
/*   Updated: 2021/02/17 16:16:16 by kkalnins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int a;
	int temp;

	a = 0;
	while (a < size)
	{
		i = a + 1;
		while (i < size)
		{
			if (tab[i] < tab[a])
			{
				temp = tab[a];
				tab[a] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		a++;
	}
}
