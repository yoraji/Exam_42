#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char *str = argv[1];
		int i=0;
		while(str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				char a = 'z' - (str[i] - 'a');
				write(1, &a, 1);
			}else if(str[i] >= 'A' && str[i] <= 'Z')
			{
				char b = 'Z' - (str[i] - 'A');
				write(1, &b, 1);
			}else
				write(1,&str[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
