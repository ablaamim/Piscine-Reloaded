/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 01:29:24 by alaamimi          #+#    #+#             */
/*   Updated: 2021/01/27 01:39:31 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	ft_print_numbers(void)
{
	char nbr;

	nbr = '0';
	while(nbr <= '9')
	{
		ft_putchar(nbr);
		nbr++;
	}
}
