#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *s)
{
	while(*s)
	{
		write(1, s , 1);
		s++;
	}
	write(1 , "\n", 1);
}

char *ft_strncpy(char *dest, const char *src, size_t length)
{
	int i;

	i = 0;
	while( i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return(dest);
}

int main()
{
	char *src = "Bogdan Alin Epure";
	char dest[50];

	ft_strncpy(dest, src, 10);
	ft_putstr(dest);
	ft_putstr(src);
	return(0);
}

