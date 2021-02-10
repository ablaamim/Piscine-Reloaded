/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:45:51 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/10 13:46:23 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_iterative_factorial(int nb)
{
	int product;

	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	product = 1;
	while (nb >= 1)
	{
		product = product * nb;
		nb--;
	}
	return (product);
}
