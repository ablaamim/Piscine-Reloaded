/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alaamimi <Alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 18:45:40 by Alaamimi          #+#    #+#             */
/*   Updated: 2021/02/09 19:25:08 by Alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

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

int	main(void)
{
	int i;
	i = 6;

	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(i));
	ft_putchar('\n');
	return (EXIT_SUCCESS);
}
