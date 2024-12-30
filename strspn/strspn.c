#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t counter =0;
	size_t i =0;
	while(*s)
	{
		while(accept[i] && *s != accept[i])
			i++;
		if (!accept[i])
			return (counter);
		i = 0;
		counter++;
		s++;
	}
	return counter;
}

int main()
{
	char str[] = "raji";
	char ptr[] = "raji";
	size_t res = ft_strspn(str,ptr);
	size_t res1 = strspn(str,ptr);
	printf("%ld\n%ld\n",res,res1);
	return 0;
}
