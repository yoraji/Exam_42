#include <unistd.h>

int main(int argc, char **argv)
{
	char *str = argv[1];
	if (argc == 2){
		int i=0;
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
				str[i] = str[i] + 13;
			else if ((str[i] >= 'n' && str[i] <= 'z' ) || (str[i] >= 'N' && str[i] <= 'Z'))
				str[i] = str[i] - 13;
			write(1,&str[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
