/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alaamimi <Alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:56:44 by Alaamimi          #+#    #+#             */
/*   Updated: 2021/02/09 16:24:11 by Alaamimi         ###   ########.fr       */
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
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *pdiv;
	int *pmod;

	a = 8;
	b = 3;
	div = 0;
	mod = 0;
	pdiv = &div;
	pmod = &mod;
	pmod = &mod;
	ft_putnbr(a);
		ft_putchar('\n');
	ft_putnbr(b);
		ft_putchar('\n');
	ft_div_mod(a, b, pdiv, pmod);
	ft_putnbr(div);
		ft_putchar('\n');
	ft_putnbr(mod);
		ft_putchar('\n');
	return (EXIT_SUCCESS);
}
