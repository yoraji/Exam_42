#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		char *str = argv[1];
	       	char *ptr = argv[2];
		int i=0;int j=0;
		while(ptr[i])
		{
			if(str[j] == ptr[i])
				j++;	
			i++;
		}
		if(str[j] == '\0')
		{
			i=0;
			while(str[i])
			{
				write(1,&str[i],1);
				i++;
			}
		}
	}
	write(1,"\n",1);
	return 0;
}
