#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putstr(char *s)
{
	while(*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1 , "\n", 1);
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

char *ft_strcat(char *dest, const char *src)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(dest);
	while(src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + ++i] = '\0';
	return(dest);
}

int main ()
{
	char src[15] = "Bogdan Alin";
	char dest[100] = "EpureBogdanALin";

	//strcat(dest,src);
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return(0);
}

