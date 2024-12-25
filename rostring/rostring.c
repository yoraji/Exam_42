#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	write_word(char *str, int start,int end){
	while(start < end)
	{
		write(1,&str[start],1);
		start++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		char *str = argv[1];
		int i = 0;int start = 0;int len = 0;
		int first_word_start =-1;int first_word_end=-1;
		while(str[i] && !is_space(str[i]))
			i++;
		start = i;
		// identify the first word
		while(str[i] && !is_space(str[i]))
			i++;
		first_word_start = start;
		first_word_end = i;
		// skip spaces after the first word 
		while(str[i] && is_space(str[i]))
			i++;
		start = i;
		int is_first_word=1;
		while(str[i])
		{
			if(!is_space(str[i])){
				start = i;
				while(str[i] && !is_space(str[i]))
					i++;
				if(!is_first_word)
					write(1," ",1);
				write_word(str, start, i);
				is_first_word = 0;
			}
			while(str[i] && is_space(str[i]))
				i++;
		}
		if (first_word_start != -1) {
       			if (!is_first_word)
        			write(1, " ", 1);
        		write_word(str, first_word_start, first_word_end);
    		}
	}
	write(1,"\n",1);
	return 0;
}
