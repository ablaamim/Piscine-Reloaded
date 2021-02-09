/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 01:40:03 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/09 13:46:46 by Alaamimi         ###   ########.fr       */
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
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0');
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int i;

	i = 0;
	ft_putnbr(i);
	ft_putchar('\n');
	ft_ft(&i);
	ft_putnbr(i);
	ft_putchar('\n');
	return EXIT_SUCCESS;
}
