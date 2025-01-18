#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
	int i=0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i]-s2[i]);
}

int main()
{
	char str1[] = "Hello Friend";
	char str2[] = "Hello Triend";
	int res = ft_strcmp(str1, str2);
	printf("%d\n", res);
}
