#include <unistd.h>

int main (int argc, char **argv)
{
	char* str = argv[1];
	char c = argv[2][0];
	char a = argv[3][0];
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		int i = 0;
		while (str[i])
		{
			if (str[i] == c)
				write(1,&a,1);
			else
				write(1,&str[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
