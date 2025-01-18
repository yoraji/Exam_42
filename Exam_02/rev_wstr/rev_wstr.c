#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char* str = argv[1];
	if (argc == 2)
	{
		int i=0;
		while(str[i])
			i++;
		i--; //Move 'i' to the last character in the string
		while(i  >= 0)
		{
			while(str[i] == ' ' && i >= 0)
				i--;
			int end = i;
			while(i >= 0 && str[i] != ' ')
				i--;
			int j = i + 1;
			while(j <= end)
			{
				write(1,&str[j],1);
				j++;
			}
			if(i > 0)
				write(1," ",1);
			i--;
		}
	}
	write(1,"\n",1);
	return 0;
}
