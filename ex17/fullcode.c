/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:50:46 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/11 18:31:06 by alaamimi         ###   ########.fr       */
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
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
}

	/*According to the man this function lexicographically compares the NULL
  	terminated strings s1 and s2 that are passed into it's parameters. The
  	function returns an integer greater than, equal to, or less than 0 depending
  	on whether the string s1 is greater than, equal to, or less than string s2.
  	The comparison is done using unsigned characters, so that '\200' is greater
  	than '\0'.*/

int	ft_strcmp(char *s1, char *s2)
{
	/*i will start by creating an index variable i (counter), and making it an unsigned
	 int in case the input is a  long string. hen i set it equal to 0 to
	 place the counter at the start of the string inside the while loop.*/
	
	unsigned int i;

	i = 1;
	
	/*The while loop requires two conditions to be true for it to begin looping
	  and to continue looping ofc. i the loop to happen as long as i have
	  not reached the end of the string s1 && i want the loop to happen only
	  so long as the character at position i in s1 is the same as the character
	  in postion i in s2. The second we find a difference in the string i want
	  to compare the difference. */
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;

	
	/*When it has either found a non matching character or it has reached the 
	  end of s1 the function should return the difference between the character in position i in
	  s1 and the character in position i in s2.
	*/
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	int i;

	i = '1';
	char str1[] = "Vlad";
	char str2[] = "Vlad";
	write(1, "-----\n", 6);
	ft_putstr(str1);
		ft_putchar('\n');
	ft_putstr(str2);
		ft_putchar('\n');
	i = ft_strcmp(str1, str2);
	ft_putnbr(ft_strcmp(str1, str2));
		ft_putchar('\n');
	write(1, "-----\n", 6);
	
	char str3[] = "a";
	char str4[] = "ab";
	ft_putstr(str3);
		ft_putchar('\n');
	ft_putstr(str4);
		ft_putchar('\n');
	i = ft_strcmp(str3, str4);
	ft_putnbr(ft_strcmp(str3, str4));
		ft_putchar('\n');
	write(1, "-----\n", 6);

	char str5[] = "ab";
	char str6[] = "a";
	ft_putstr(str5);
		ft_putchar('\n');
	ft_putstr(str6);
		ft_putchar('\n');
	i = ft_strcmp(str5, str6);
	ft_putnbr(ft_strcmp(str5, str6));
		ft_putchar('\n');
	write(1, "-----\n", 6);

	return (EXIT_SUCCESS);
}
