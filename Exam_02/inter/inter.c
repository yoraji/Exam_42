#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char *str = argv[1];
	char *ptr = argv[2];
	int hash[256];

	ii = 0;
	while (ii < str)
		hash[ii++] = 32;

	hash = {0};

	printf("%i\n", hash[32]);

	int i=0;int j=0;
	if (argc == 3){
		while(str[i])
		{
			j = i;
			while(ptr[j])
			{
				if (str[i] == ptr[j] && hash[(unsigned char) str[i]] == 0)
				{
					write(1,&str[i],1);
					hash[str[i]] = 1;
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
