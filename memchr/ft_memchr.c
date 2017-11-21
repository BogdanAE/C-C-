#include <string.h>
#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void *ft_memchr(const void *src, int c, size_t length)
{
	unsigned char *s = (char*) src;
	int i;
	char *temp;

	i = 0;
	while ( i < length && *s != '\0')
	{
		if(*s == c)
		{
			return(s);
		}
		else
		{
			s++;
		}
		i++;
	}
	return(NULL);
}
int ft_strlen(char *s)
{
	int length;

	length =0;
	while(*s)
	{
		length++;
		s++;
	}
	return(length);
}

int main ()
{
	char *src = "Something to be written here since i have to search the string for a character";
	char *dest;

	printf("Original string is : %s\n", src);
	dest = ft_memchr(src, 'w', ft_strlen(src));
	if(dest == NULL)
	{
		printf("The charachter was not found\n");
	}
	else
	{
		ft_putstr("The character was found and the string after it is:");
		ft_putstr(dest);
	}
	return (0);
}
