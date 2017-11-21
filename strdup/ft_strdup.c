#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int ft_strlen(char *str)
{
	int length;

	length = 0;
	while(*str)
	{
		length++;
		str++;
	}
	return(length);
}


char *ft_strdup(const char *src)
{
	unsigned char *s = (char *) src;
	char *dest;
	int len;
	int i;
	
	i = 0;
	len = ft_strlen(s);
	dest =(char *) malloc (len + 1);
	while(s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i++] = '\0';
	return(dest);
}

int main ()
{
	char *src = "Bogdan Alin Epure";
	char *dest;

	printf("Original string: %s\n", src);
	dest = ft_strdup(src);
	ft_putstr(dest);
	free(dest);
	return(0);
}
