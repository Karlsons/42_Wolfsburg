/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalnins <kkalnins@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 22:02:42 by kkalnins          #+#    #+#             */
/*   Updated: 2021/02/18 09:52:54 by kkalnins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int space;

	i = 0;
	space = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (space && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!space && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			space = 0;
		}
		else
			space = 1;
		i++;
	}
	return (str);
}
