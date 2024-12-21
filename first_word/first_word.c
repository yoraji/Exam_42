#include <unistd.h>

int main (int argc, char *argv[])
{
	char *str = argv[1];
	if (argc == 2){
		int i=0;
		while(str[i] == ' ')
			i++;
		while (str[i] != ' ' && str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
