#include <stdlib.h>
size_t ft_strlen(char *ptr)
{
	size_t i =0;
	while (ptr[i])
	{
		i++;
	}
	return i;
}

char	*ft_strdup(char *str)
{
	size_t i = ft_strlen(str);
	char *ptr = malloc(i+1);
	size_t j = 0;
	while(str[j])
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

int	ft_count_digit(int num)
{
	int counter = 0;
	
	if (num == 0)
		return 1;
	if (num < 0)
		num = -num;
	while (num)
	{
		num /= 10;
		counter++;
	}
	return counter;
}

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	int count_digit = ft_count_digit(nbr);
	int added = (nbr < 0);
	char *str = malloc(count_digit + added + 1);
	str[count_digit + added] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
		nbr = -nbr;
	while(nbr)
	{
		int temp = nbr % 10;
		str[--count_digit + added] = temp + '0';
		nbr /= 10;
	}
	if (added)
		str[0] = '-';
	return (str);
}

