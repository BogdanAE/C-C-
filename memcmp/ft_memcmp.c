#include <string.h>
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int ft_memcmp(const void *s1, const void *s2, size_t length)
{
	int val;
	int i;

	i = 0;
	val = 0;
	unsigned char *src1 = (char *) s1;
	unsigned char *src2 = (char *) s2;

	while(i < length && (*src1 || *src2))
	{
		if(*src1 == *src2)
		{
			val += 0;
		}
		else if(*src1 < *src2)
		{
			val = *src1 - *src2;
		}
		else if(*src1 > *src2)
		{
			val = *src1 - *src2;
		}
		src1++;
		src2++;
	}
	return(val);
}

int main()
{
	char *one = "dasdadqa3 cuy8awt9osgucs";
	char *two = "97 6vabtiuy4gctowaguf";
	int value;
	int value1;

	value1 = memcmp(one, two, 5);
	value = ft_memcmp(one, two, 5);
	if(value1 == 0)
	{
		printf("strings are equal\n");
	}
	else if(value1 > 0)
	{
		printf("%s is greater than %s\n", one, two);
	}
	else if(value1 < 0)
	{
		printf("%s is less  than %s\n", one, two);
	}

	if(value == 0)
	{
		printf("strings are equal\n");
	}
	else if(value > 0)
	{
		printf("%s is greater than %s\n", one, two);
	}
	else if(value < 0)
	{
		printf("%s is less than %s\n",one, two);
	}
	return(0);
}

