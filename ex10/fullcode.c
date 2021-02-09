/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alaamimi <Alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:08:05 by Alaamimi          #+#    #+#             */
/*   Updated: 2021/02/09 14:15:20 by Alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = - nb;
		ft_putchar('-');
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	nb2 = 1;
	ft_putnbr(nb1);
	ft_putchar('\n');
	ft_putnbr(nb2);
	ft_putchar('\n');
	ft_swap(&nb1, &nb2);
	ft_putnbr(nb1);
	ft_putchar('\n');
	ft_putnbr(nb2);
	return EXIT_SUCCESS;
}
