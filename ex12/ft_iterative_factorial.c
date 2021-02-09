/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alaamimi <Alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:25:50 by Alaamimi          #+#    #+#             */
/*   Updated: 2021/02/09 19:34:54 by Alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int count;

	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	count = 1;
	while (nb >= 1)
	{
		count = count * nb;
		nb--;
	}
	return (count);
}
