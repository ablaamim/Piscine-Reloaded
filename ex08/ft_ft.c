/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 01:40:03 by alaamimi          #+#    #+#             */
/*   Updated: 2021/01/27 02:34:39 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdlib.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	int a;
	a = 42;
	nbr = &a;
	printf("%d\n", *ptr);
}

int	main(void)
{
	ft_ft(42);
	return EXIT_SUCCESS;
}
