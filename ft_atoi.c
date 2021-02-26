/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalnins <kkalnins@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:42:52 by kkalnins          #+#    #+#             */
/*   Updated: 2021/02/23 01:17:49 by kkalnins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' ||
	str[i] == '\f' || str[i] == '\r' ||
	str[i] == '\t' || str[i] == '\v' ||
	str[i] == '\n')
		i++;
	while (str[i] && ((str[i] == '-') || (str[i] == '+')))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
