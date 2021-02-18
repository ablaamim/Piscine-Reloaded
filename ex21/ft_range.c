/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:56:57 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/18 15:56:59 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   *ft_range(int min, int max)
{
    int *str;
    int i;
    int len;


  if (min >= max)
  {
    return (NULL);
  }

    i = 0;
    len = max - min;
    str = (int *)malloc(sizeof(min) * len);
    while (i < len)
    {
        str[i] = min + i;
        i++;
    }
    return (str);
}