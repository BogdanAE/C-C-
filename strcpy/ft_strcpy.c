#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *s)
{
	while(*s)
	{
		write(1 , s , 1);
		s++;
	}
	write(1, "\n", 1);
}

char *ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return(dest);
}

int ft_strlen(char *s)
{
	int length;

	length = 0;
	while(*s)
	{
		length++;
		s++;
	}
	return(length);
}

int main()
{
	char *src = " Epure Bogdan Alin";
	char dest[ft_strlen(src) + 1];

	ft_strcpy(dest, src);
	ft_putstr(dest);
	return(0);
}

