/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 01:19:48 by alaamimi          #+#    #+#             */
/*   Updated: 2021/01/27 01:24:58 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c);

void ft_print_alphabet(void)
{
	char ltr;

	letter = 'a';
	while(letter <= 'z')
	{
		ft_putchar(ltr);
		letter++;
	}
}
