#include <stdlib.h>
#include <stdio.h>

int	cheak_if_whitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] && !cheak_if_whitespace(str[i]))
		i++;
	return (i);
}

int	count_word(char *ptr)
{
	int counter = 0;
	while(*ptr)
	{
		while(*ptr && cheak_if_whitespace(*ptr))
			ptr++;
		if (*ptr && !cheak_if_whitespace(*ptr))
		{
			counter++;
			while(*ptr &&  !cheak_if_whitespace(*ptr))
				ptr++;
		}
	}
	return (counter);
}

char	*ft_strdup(char *str)
{
	int len = ft_strlen(str);
	int i=0;
	char *ptr = malloc(len+1);
	if(!ptr)
		return NULL;
	while(i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}

char**	ft_split(char *str)
{
	int count = count_word(str);
	char**	split = (char**)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return NULL;
	int i=0;
	while (*str)
	{
		while (*str && cheak_if_whitespace(*str))
			str++;
		if(*str && !cheak_if_whitespace(*str))
		{
			split[i] = ft_strdup(str);
			i++;
		}
		while (*str && !cheak_if_whitespace(*str))
                	str++;
	}
	split[i] = NULL;
	return (split);
}


int main()
{
    char str[] = "  Hello   world  this   is C";
    char **result = ft_split(str);

    if (result)
    {
        for (int i = 0; result[i]; i++)
        {
            printf("Word %d: %s\n", i + 1, result[i]);
            free(result[i]); // Free each word
        }
        free(result); // Free the array of pointers
    }
    return 0;
}
