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

/*This function displays the string s to the standard output. We do this using
 our ft_putchar function. We start by declaring a i variable i that we
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
