/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:41:02 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/10 16:54:42 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int	main(void)
{
	char str[] = "vlad is cool";
	ft_putstr(str);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	char str1[] = "";
	ft_putstr(str1);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	char str2[] = "Pipe this to another | and export the $";
	ft_putstr(str2);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
