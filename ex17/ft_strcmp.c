/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:38:16 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/11 18:39:29 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	
	/*When it have either found a non matching character or it has reached the 
	end of s1 the function should return the difference between the character in position i in
	 s1 and the character in position i in s2.
	*/
	}
	return (s1[i] - s2[i]);
}

