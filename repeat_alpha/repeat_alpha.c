#include <unistd.h>

int main(int argc, char **argv)
{
	char *str = argv[1];
	if (argc == 2)
	{
		int i= -1;
		while(str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				int num = str[i] - 'A';
				while(num--)
				{	
					write(1,&str[i],1);
				}
			}else if (str[i] >= 'a' && str[i] <= 'z')
			{
				int temp = str[i] - 'a';
				while (temp--)
					write(1,&str[i],1);
			}else
				write(1,&str[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
