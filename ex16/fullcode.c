/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:53:35 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/10 18:09:12 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		*str++;
	}
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

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	int i;
	i = 0;
	char str[] = "vlad";

	ft_putstr(str);
		ft_putchar('\n');
	i = ft_strlen(str);
	ft_putnbr(i);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	char str1[] = "0123456789";
	ft_putstr(str1);
		ft_putchar('\n');
	i = ft_strlen(str1);
	ft_putnbr(i);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
