/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:51:25 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/10 17:52:43 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int cmpt;

	cmpt = 0;
	while (str[cmpt] != '\0')
	{
		cmpt++;
	}
	return (cmpt);
}
