# :books: Piscine Reloaded :

> This is the Piscine Reloaded project @ 1337 (42 Network), it no longer exists in the new graph.

> Review the basics with a set of well-picked assignments from the selection Piscine.

<img src = "https://sm.mashable.com/t/mashable_in/fun/t/the-here-w/the-here-we-go-again-meme-is-perfect-for-every-frustrating-s_kgv8.960.png" width ="700">


### :dart: Objectives :
> - Reviewing.
> - Basics of programming.
### :floppy_disk: Skills :
> - Imperative programming
> - Unix
> - Rigor

### :eyes: Old holy graph :

<img src ="https://github.com/Alaamimi/Piscine-Reloaded/blob/master/ress/Screenshot_20210228-005159.jpg" width="700">

### :information_source: The new holy graph does not include this project !!

<img src ="https://github.com/Alaamimi/Piscine-Reloaded/blob/master/ress/Sans%20titre.jpg" width="700">

# :books: Subject :

> [Piscine Reloaded pdf](https://github.com/Alaamimi/Piscine-Reloaded/blob/master/piscine_reloaded.pdf)

### This project consists of multiple generic functions that can be used in a lot of situations :
| Exercises | Task |
|---        |---   |
| Ex00  | ls -l in folder should display specific things. |
| Ex01 |Create a file which show Z when displayed with cat command. |
| Ex02 | Find a command line that will search from current directory and any sub-directories files ending with ~ or beginning by #. It will show and delete these. Only one command allowed, no ";" or "&&" |
| Ex03 | Find a command line that will search from current directory and any sub-directories files ending by ".sh", displaying only their name without ".sh" |
| Ex04 | Write a command line that displays MAC adresses from your machine. |
| Ex05 | Create a file containing ONLY "42", named "\?$\*'KwaMe'\*$?\". |
| Ex06 | void ft_print_alphabet(void); Show the alphabet in lowercase a > z. |
| Ex07 | void ft_print_numbers(void); Write all numbers on the same line 1 > 9. |
| Ex08 | void ft_is_negative(int n); Return N when n is negative or P when it is positive (0 is positive). |
| Ex09 | void ft_ft(int \*nbr); Give the \*nbr pointer the value 42. |
| Ex10 | void ft_swap(int \*a, int \*b); Swap integers values using their adresses. |
| Ex11 | void ft_div_mod(int a, int b, int \*div, int \*mod); Divide a by b and store at \*div, store the rest at \*mod. |
| Ex12 | int ft_iterative_factorial(int nb); Iterative function that returns a number, result of factorial from nb. |
| Ex13 | int ft_recursive_factorial(int nb); Returns the factorial of nb, recursively. |
| Ex14 | int ft_sqrt(int nb); Returns square root of nb if it exist, else returns 0. |
| Ex15 | void ft_putstr(char \*str); Display a string. |
| Ex16 | int ft_strlen(char \*str); Reproduces strlen behavior. |
| Ex17 | int ft_strcmp(char \*s1, char \*s2); Reproduces strcmp behavior. |
| Ex18 | Write a program that displays arguments passed in command line. |
| Ex19 | Write a program that display arguments passed in command line, ordered by ASCII. |
| Ex20 | char \*ft_strdup(char \*src); Reproduces strdup behavior. |
| Ex21 | int \*ft_range(int min, int max); Returns an int array containing all integers between min and max. |
| Ex22 | Write a macro ABS that replaces it's parameter by an absolute value. |
| Ex23 | Write an ft_point.h that will compile the ft_point.c |
| Ex24 | Makefile. Fetches src in /src, headers in /includes, require clean/fclean/re/all rules. |
| Ex25 | void ft_foreach(int \*tab, int length, void(\*f)(int)); Apply a function on all elements of an array. |
| Ex26 | int ft_count_if(char \*\*tab, int(\*f)(char\*)); Returns number of elements in the array that returns 1. |
| Ex27 | Write a program called ft_display_file that displays content of file passed in argument on STDOUT. Makefile with all/clean/fclean. Malloc FORBIDDEN. Errors display on STDERR. |

### Guide through problems, its all explained ;)! So don't panic .

<img src = "https://memegenerator.net/img/instances/71416474/lets-start.jpg">

## Exercise 00 : Oh yeah, mooore...

1. :books: Task :

```
$> ls -l
total 42
drwx--xr-x  2 login  wheel  XX Jun  1 20:47 test0
-rwx--xr--  1 login  wheel   4 Jun  1 21:46 test1
dr-x---r--  2 login  wheel  XX Jun  1 22:45 test2
-r-----r--  2 login  wheel   1 Jun  1 23:44 test3
-rw-r----x  1 login  wheel   2 Jun  1 23:43 test4
-r-----r--  2 login  wheel   1 Jun  1 23:44 test5
lrwxr-xr-x  1 login  wheel   5 Jun  1 22:20 test6 -> test0
$>
```

2. :books: Check `man touch` :

```
-t      Change the access and modification times to the specified time instead of the current time of day.  The argument is of the form
             ``[[CC]YY]MMDDhhmm[.SS]'' where each pair of letters represents the following:
                   CC      The first two digits of the year (the century).
                   YY      The second two digits of the year.  If ``YY'' is specified, but ``CC'' is not, a value for ``YY'' between 69 and 99 results in a ``CC''
                           value of 19.  Otherwise, a ``CC'' value of 20 is used.
                   MM      The month of the year, from 01 to 12.
                   DD      the day of the month, from 01 to 31.
                   hh      The hour of the day, from 00 to 23.
                   mm      The minute of the hour, from 00 to 59.
                   SS      The second of the minute, from 00 to 61.

             If the ``CC'' and ``YY'' letter pairs are not specified, the values default to the current year.  If the ``SS'' letter pair is not specified, the
             value defaults to 0.
```
> [More details in this folder](https://github.com/Alaamimi/Piscine-Reloaded/blob/master/ex00/Readme.md)

---
3. :floppy_disk: Script :

```touch -h -t "06012220" test6```

## Exercise 01 : Z

---
1. :beetle: Test && Debug :

`z
`

2. :floppy_disk: Script :

> echo "Z" > z

## Exercise 02 : clean

> In a file called clean place the command line that will search for all files - in the current directory as well as in its sub-directories - with a name ending by ~, or with a name that start and end by #
> * The command line will show and erase all files found.
> * Only one command is allowed: no ’;’ or ’&&’ or other shenanigans.

1. :books: Useful command -  `touch none{0..10}~` to create 10 files.

2. :books: `-name`

> -name pattern
>             True if the last component of the pathname being examined matches pattern.
>             Special shell pattern matching characters (``['', ``]'', ``*'', and ``?'')
>             may be used as part of pattern.  These characters may be matched explicitly
>             by escaping them with a backslash (``\'').

3. We will use next flags:
> `-print` - verbose output
> `-delete` - all
> `-name` - input your find's name
> `-exec ls -l {} \;` - more
> `-o` - connection

---
4. :floppy_disk: Script :

```find . -name "#*" -print -delete -o -name "*#" -delete -print -o -name "*~" -delete -print```

```find . -name -type f \(-name "*#" -o -name "#*#") -print -delete```

## Exercise 03 : find_sh

---
1. :floppy_disk: Script :

``` find . "*.sh" -print | awk -F "." '/.sh/{ print $2 }' | awk -F "/" '{ print $2 }' ```

> :books: `man awk` :

## Exercise 04 : MAC
1. `man ifconfig`
2. `man awk`

---
4. :floppy_disk: Script :

```ifconfig en0 | grep ether -w | awk -F " " '{ print $2 }'```

## Exercise 05 : Can you create it ?

---
1. :floppy_disk: Script :

```touch '"\?$*’KwaMe’*$?\"'```

> p.s. Simple - `''` or `echo 42 > '"\?$*’KwaMe’*$?\"'`

## Exercise 06 : ft_print_alphabet
1. :dart: Task :

> Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’.

2. :dart: Task :

> This function is easier to enter, that would constantly use.
> void - is NONE type, func - return NONE, but put `char` character

```c
void ft_putchar(char c)
{
	write(1, &c, 1);
}
```

2.1 `man ASCII` :

```
      97  a    98  b    99  c   100  d   101  e   102  f   103  g
     104  h   105  i   106  j   107  k   108  l   109  m   110  n   111  o
     112  p   113  q   114  r   115  s   116  t   117  u   118  v   119  w
     120  x   121  y   122  z
```

> `(i >= 97 && i <= 122)` while i fits the condition

---
3. :dart: Function :

```c
void	ft_print_alphabet(void)
{
	char ltr;

	ltr = 'a'; // ltr = 97;
	while (ltr <= 'z') // While (ltr <= 122)
	{
		ft_putchar(ltr);
		ltr++;
	}
}
```

4. :beetle: :wrench: Test && Debug :

```c
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
```

5. :8ball: Expected output :

```c
> $> abcd...z
```

## Exercise 07 : ft_print_numbers

1. :dart: Task :

> Create a function that displays all digits, on a single line, by ascending order.

2. `man ascii`:

```
      48  0    49  1    50  2    51  3    52  4    53  5    54  6    55  7
      56  8    57  9
```

---
3. :dart: Function:

``` c
void	ft_print_numbers(void)
{
	char nbr;

	nbr = '0';
	while (nbr >= '0' && nbr <= '9')
	{
		ft_putchar(nbr);
		nbr++;
}
```

## Exercise 08: ft_is_negative

1. :dart: Task :

> Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.

---
2. :dart: Function:

```c
void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
```

## Exercise 09 : ft_ft 

1. :dart: Task :

> Create a function that takes a pointer to int as a parameter, and sets the value "42" to that int.

2. About pointers:

> [Check this video about Pointers](https://www.youtube.com/watch?v=XISnO2YhnsY&ab_channel=CS50)

2. :beetle: Test && debug:

> Use ft_putnbr(); function to display numbers passed as parameter.

> First we print the value of i, then print the value passed to the pointer.

```c 
int	main(void)
{
	int i;
	int *nbr;

	i = 0;
	nbr = &i;
	ft_putnbr(i);
		ft_putchar('\n');
	ft_ft(nbr);
	ft_putnbr(i);
		ft_putchar('\n');
	return(0);
}
```

> :beetle: Common mistake :

```bash
ft_ft.c:14:9: warning: incompatible integer to pointer conversion passing 'int' to
      parameter of type 'int *'; take the address with & [-Wint-conversion]
  ft_ft(i);
        ^
        &
```
> This message was displayed, because we did not insert a pointer to the function

---
3. :dart: Function :

```c
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
```

## Exercise 10 : ft_swap

1. :dart: Task :

> Create a function that swaps the value of two integers whose addresses are entered as parameters.

> *Here’s how it should be prototyped:*
> ``` void ft_swap(int *a, int *b);```


2. :beetle: Test && debug :

```c
int	main()
{
	int nb1;
	int nb2;
	int *a;
	int *b;

	nb1 = 0;
	nb2 = 1;
	a = &nb1;
	b = &nb2;
	ft_putnbr(nb1);
		ft_putchar('\n');
	ft_putnbr(nb2);
		ft_putchar('\n');
	ft_swap(a, b);
	ft_putnbr(nb1);
		ft_putchar('\n');
	ft_putnbr(nb2);
		ft_putchar('\n');
	return(0);
}
```

---
3. :dart: Function :

```c
void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
```

## Exercise 11 : ft_div_mod

1. :dart: Task :

> Create a function ft_div_mod prototyped like this :
>	`void ft_div_mod(int a, int b, int *div, int *mod);`
>

> This function divides parameters a by b and stores the result in the int pointed by div. It also stores the remainder of the division of a by b in the int pointed by mod.

2. :books: About div & mod [standard operation in C](https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B)

| Operator name	| Syntax        | C++ prototype examples |
| ------------- |:-------------:| ----------------------:|
| Multiplication| a * b         | `K::operator *(S b);`  |
| Division      | a / b         | `K::operator /(S b);`  |
| Modulo        | a % b         | `R K::operator %(S b);`|

2. :beetle: Test && debug :
```c
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *pdiv;
	int *pmod;

	a = 6;
	b = 2;
	div = 0;
	mod  = 0;
	pdiv = &div;
	pmod = &mod;
	ft_putnbr(a);
		ft_putchar('\n');
	ft_putnbr(b);
		ft_putchar('\n');
	ft_div_mod(a, b, pdiv, pmod);
	ft_putnbr(div);
		ft_putchar('\n');
	ft_putnbr(mod);
		ft_putchar('\n');
	return(0);
}
```

---
3. :dart: Function :

```c
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
```

## Exercise 12 : ft_iterative_factorial

1. :dart: Task :

> Create an iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter.

> If there’s an error, the function should return 0.

> Here’s how it should be prototyped :
> ```c int ft_iterative_factorial(int nb);```

> Your function must return its result in less than two seconds.

2. :books: About factorial :

```math
7! = 1 * 2 * 3 * 4 * 5 * 6 * 7
0! = 1
```

---
3. :dart: Function :

```c
int	ft_iterative_factorial(int nb)
{
	int product;

	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	product = 1;
	while(nb >= 1)
	{
		product = product * nb;
		nb--;
	}
	return (product);
}
```
---
4. :beetle: Test && debug :

```c
int	main(void)
{
	int i;
	i = 5;

	ft_putnbr(i);
		ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(i));
		ft_putchar('\n');
	return (0);

}

```
## Exercise 13 : ft_recursive_factorial

1. :dart: Task :

> Create a function that returns the factorial of the number passed as parameter.
> Here's how it should be prototyped :

```c
int ft_recursive_factorial(int nb);
```
> [CS50 course explaining this topic in details](https://www.youtube.com/watch?v=mz6tAJMVmfM&ab_channel=CS50)
---
3. :dart: Function :

```c
int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return(1);
	else if (nb < 0 || nb > 12)
		return(0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
```

> p.s. Check this: `else if (nb < 0 || nb > 12)`, fact function only take positive numbers
>, also it overflows beyond the size of int once it reaches 12.

## Exercise 14 : ft_sqrt

1. :dart: Task:

> Create a function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number.
> Here’s how it should be prototyped :

```c
int ft_sqrt(int nb);
```

> Your function must return its result in less than two seconds.

---

3. :dart: Function:

```c

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	while(sqrt <= nb / 2)
	{
		if ((sqrt * sqrt) == nb)
			return (nb);
		else
			sqrt++;
    }
  return (0);
}
```

## Exercise 15 : ft_putstr

1. :books: Classic problem :

```c
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
```

2. :dart: Function :
```c
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

```
## Exercise 16 : ft_strlen

1. Task :

Reproduce the behavior of the function strlen.

2. Function :

``` c
int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return(len);
}
```

3. Test:

```c
int	main()
{
	int i;

	i = 0;
	char str[] = "Hello world";
	ft_putstr(str);
		ft_putchar('\n');
	i = ft_strlen(i);
	ft_putnbr(i);
		ft_putchar('\n');
	return(0);
}
```

## Exercise 17 : ft_strcmp

1. strcmp string.h function :

> man strcmp

``` bash
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-
     terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because
     strncmp() is designed for comparing strings rather than binary data,
     characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than,
     equal to, or less than 0, according as the string s1 is greater than,
     equal to, or less than the string s2.  The comparison is done using
     unsigned characters, so that `\200' is greater than `\0'.
```

2. Source of strcmp :

```c
	/*Compare S1 and S2, returning less than, equal to or
	greater than zero if S1 is lexicographically less than,
	equal to or greater than S2.*/
int	strcmp (const char *p1, const char *p2)
{
	const unsigned char *s1 = (const unsigned char *) p1;
	const unsigned char *s2 = (const unsigned char *) p2;
	unsigned char c1, c2;
	do
	{
		c1 = (unsigned char) *s1++;
		c2 = (unsigned char) *s2++;
		if (c1 == '\0')
		return c1 - c2;
	}
	while (c1 == c2);
	return c1 - c2;
}
```

> Note this: return only value c1 - c2;

3. Function :

```c
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

```

> Test :

> I debug with all possible cases : (s1 == s2) || (s1 > s2) || (s1 < s2).

> PS : i separated the output with couple of "-" characters and a newline (For output beauty.).

```c
void	ft_putchar(char c);
void	ft_pustr(char *str);
void	ft_putnbr(int nb);
int	ft_ft_strcmp(char *s1, char *s2);

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
```

>

## Exercise 18 : ft_print_params

1. Task :

```bash
$>gcc ft_print_params.c -o ft_print_params && ./ft_print_params test1 test2 test3
test1 test2
test3 $>
```

2. Function :

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
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
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	(void)argc;
	(void)argv;
	while (i < argc)
	{
		ft_putstr(argv[i]);
			ft_putchar('\n');
		i++;
	}
	write(1, "Arguments count = ", 20);
	ft_putnbr(argc);
	ft_putchar('\n');
	return (0);
}

```

## Exercise 19 : ft_sort_params

1. Task :

```
> • We’re dealing with a program here, you should therefore have a function main in your .c file.
> • Create a program that displays its given arguments sorted by ascii order.
> • It should display all arguments, except for argv[0].
> • All arguments should have their own line.
```
2. Function :
```c
#include <unistd.h>

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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	char *tmp;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}

```

## Exercise 20 : ft_strdup

1.  task :
```
Reproduce the behavior of the function strdup (man strdup).

```
```bash

> MAN STRDUP:

DESCRIPTION
	The strdup() function returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc(3), and can be freed with free(3).
	
	The strndup() function is similar, but only copies at most n bytes. If s is longer than n, only n bytes are copied, and a terminating null byte ('\0') is added.
	
	strdupa() and strndupa() are similar, but use alloca(3) to allocate the buffer. They are only available when using the GNU GCC suite, and suffer from the same limitations described in alloca(3).

RETURN VALUE
	The strdup() function returns a pointer to the duplicated string, or NULL if insufficient memory was available.
```
2. function :
```c
char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(*src) * ((ft_strlen((char *)src)) + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
```
3. Test :
```c
void	ft_putchar(char c);
void	ft_pustr(char *str);
int	ft_strlen(char *str);
int	*ft_strdup(char *src);

int main(void)
{
	char str[] = "Duplicate me motherfucker";

	ft_putstr(str);
		ft_putchar('\n');
	printf("%p\n", str);
	write(1, "-----\n", 6);
	ft_strdup(str);
	ft_putstr(str);
		ft_putchar('\n');
	printf("%p\n", str);
	write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
```
## Exercise 21 : ft_range

1. Task :

• Create a function ft_range which returns an array ofints. This int array should
contain all values between min and max.
• Min included - max excluded.
• Here’s how it should be prototyped :
int *ft_range(int min, int max);
• If min´value is greater or equal to max’s value, a null pointer should be returned.

2. Function :

```c
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
```
3. Test :

## Exercise 22 : ft_abs.h

1. Task :

• Create a macro ABS which replaces its argument by it absolute value :
#define ABS(Value)

2. Function :
```c
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ((Value < 0) ? (-Value) : (Value))

#endif
```

3. Test :

## Exercise 23 : ft_point.h

1. Task :

• Create a file ft_point.h that’ll compile the following main :

#include "ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}

2. Function :

```c
#ifndef FT_POINT_H
# define FT_POINT_H

typedef	struct	s_point
{
	int x;
	int y;
}				t_point;

void			set_point(t_point *point);

#endif
```

## Exercise 24 : Makefile

1. Task :

• Create the Makefile that’ll compile your libft.a.
• The Makefile will get its source files from the "srcs" directory.
• The Makefile will get its header files from the "includes" directory.
• The lib will be at the root of the exercise.
• The Makefile should also implement the following rules: clean, fclean and re as
well as all.
• fclean does the equivalent of a make clean and also erases the binary created
during the make. re does the equivalent of a make fclean followed by a make.
• We’ll only fetch your Makefile and test it with our files. For this exercise, only
the following 5 mandatory functions of your lib have to be handled : (ft_putchar,
ft_putstr, ft_strcmp, ft_strlen and ft_swap).

2. Function :
```
NAME = libft.a
FLAG = -Wall -Wextra -Werror
FILES =	srcs/*.c
OBJ = *.o

ALL: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(FILES)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
```

## Exercise 25 : ft_foreach

1. Task :

• Create the function ft_foreach which, for a given ints array, applies a function on
all elements of the array. This function will be applied following the array’s order.
• Here’s how the function should be prototyped :
void ft_foreach(int *tab, int length, void(*f)(int));
• For example, the function ft_foreach could be called as follows in order to display
all ints of the array :
ft_foreach(tab, 1337, &ft_putnbr);

2. Function :
```c
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
```

## Exercise 26 : ft_count_if

1. Task :

• Create a function ft_count_if which will return the number of elements of the
array that return 1, passed to the function f.
• Here’s how the function should be prototyped :
int ft_count_if(char **tab, int(*f)(char*));
• The array will be delimited by 0.


2. Function :
```c
int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;

	counter = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}
```

## Exercise 27 : display_file

1. Task :

• Create a program called ft_display_file that displays, on the standard output,
only the content of the file given as argument.
• The submission directory should have a Makefile with the following rules : all,
clean, fclean. The binary will be called ft_display_file.
• The malloc function is forbidden. You can only do this exercise by declaring a
fixed-sized array.
• All files given as arguments will be valid.
• Error messages have to be displayed on their reserved output.

2. Function :
```c
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#define BUFF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	char	buff[BUFF_SIZE + 1];

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
	{
		x = open(argv[1], O_RDONLY);
		y = read(x, buff, BUFF_SIZE);
		buff[y] = '\0';
		ft_putstr(buff);
		close(x);
	}
	else
		write(2, "Too many arguments.\n", 20);
}
```
