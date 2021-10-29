/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:56:57 by alaamimi          #+#    #+#             */
/*   Updated: 2021/10/29 14:06:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int   *ft_range(int min, int max)
{
	int	*str;
	int	i;


	if (min >= max)
		return (0);
	i = 0;
	max -= min;
	str = (int *)malloc(sizeof(int) * max);
	while (i < max)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}

void	ft_intarray_debug(int *tab, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d", tab[size - 1]);
	printf("]");
}

int	main(void)
{
	int	len;
	int	arr[] = {0, 1, 2, 3, 4};

	len = sizeof(arr) / sizeof(arr[0]);
	ft_intarray_debug(arr, len);
	printf("\n");
	ft_intarray_debug(ft_range(10, 20), 10);
	printf("\n");
	return (EXIT_SUCCESS);
}
