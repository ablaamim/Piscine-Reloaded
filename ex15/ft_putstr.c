/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:54:59 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/11 18:56:06 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function displays the string s to the standard output. We do this using
 our ft_putchar function. We start by declaring a i variable that we
 will use to move through our string. We use a i because it is
 guaranteed to be big enough to contain the size of the biggest object your
 system can handle. This way we can display the absolute biggest string that
 our computer can handle. We set i equal to 0 to start at the beginning of
 the parameter string s. We then do a simple loop stating that so long as we
 have not reached the end of our string we want the loop to continue. We move
 to each index position of our string and place the character in that
 position as a parameter for our ft_putchar function. The ft_putchar function
 will put that character in the standard output and then we increment the i
 variable to continue moving through the string. We do this until we reach
 the terminating '\0' of the string.*/

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}
