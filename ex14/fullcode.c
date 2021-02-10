/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:31:38 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/10 16:17:43 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
}

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	while (sqrt <= nb / 2)
	{
		if ((sqrt * sqrt) == nb)
			return (sqrt);
		else
			sqrt++;
	}
	return (0);

}

int	main(void)
{
	int i;

	i = 0;
	ft_putnbr(i);
		ft_putchar('\n');
	ft_putnbr(ft_sqrt(i));
		ft_putchar('\n');
	write (1, "-----\n", 6);
	i = 100;
	ft_putnbr(i);
		ft_putchar('\n');
	ft_putnbr(ft_sqrt(i));
		ft_putchar('\n');
	write(1, "-----\n", 6);
	i = -1;
	ft_putnbr(i);
		ft_putchar('\n');
	ft_putnbr(ft_sqrt(i));
		ft_putchar('\n');
	return (EXIT_SUCCESS);
}
