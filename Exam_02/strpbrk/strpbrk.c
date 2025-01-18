#include <unistd.h>
#include <stdio.h>

char	*strpbrk(const char *s, const char *accept)
{
	if(!(*s) || !(*accept))
		return 0;
	while(*s)
	{
		int i = 0;
		while(accept[i])
		{
			if(*s == accept[i])
				return ((char *)s);
			i++;
		}
		s++;
	}
	return NULL;
}

int main()
{
	char str[] = "hello friend";
	char accept[] = "xxxx";
	char *c = strpbrk(str, accept);
	if(c)
		printf("FOUND A MATCHING OF THE CHARACTER. \n");
	else
		printf("NO MATCHING CHARACTER FOUND. \n");
	return 0;
}
