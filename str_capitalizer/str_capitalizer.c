#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc == 1){
		write(1,"\n",1);
	}else{
		int i=1;
		int j=0;
		while(i < argc)
		{
			j=0;
			int is_flag = 1;
			while(argv[i][j])
			{
				if((argv[i][j] >= 'a' && argv[i][j] <= 'z') && is_flag)
				{
					argv[i][j] -= 32;	
				}
				if ((argv[i][j] >= 'A' && argv[i][j] <= 'Z') && !is_flag)
				{
					argv[i][j] += 32;
				}
				write(1,&argv[i][j],1);	
				is_flag = (argv[i][j] == ' ' || argv[i][j] == '\t');
				j++;
			}
			write(1,"\n",1);
			i++;
		}
	}
	return 0;
}
