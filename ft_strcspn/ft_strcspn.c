#include <stdio.h>


size_t    ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t count = 0;
	while (*s)
	{
		while (reject[i] && *s != reject[i])
			i++;
		if(reject[i])
			return(count);
		i = 0;
		count++;
		s++;		
	}
	return (count);
}

int main()
{
	char str[] = "Hello , Friend";
	char reject[]="lo";
	int result ;
	result = ft_strcspn(str, reject);
	printf("%d\n", result);
	return (0);
}
