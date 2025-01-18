#include <unistd.h>
#include "flood_fill.h"
#include <stdio.h>
#include <stdlib.h>


char **make_area(char ** zone, t_point size)
{
	char **new;
	new = malloc(sizeof(char *)*size.y);
	for (int i=0; i< size.y;i++)
	{
		new[i] = malloc(size.x + 1);
		for (int j=0; j < size.x;++j)
		{
			new[i][j] = zone[i][j];
		}
		new[i][size.x] = '\0';
	}
	return new;
}
// the main idea is the that you have to to fill in all direction by recursion 
void	fill(char **tab, t_point size, int x,int y,char target)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y)
		return ;
	if (tab[y][x] != target)
		return ;
	tab[y][x] = 'F';
	// Recursivly fill in all four directions
	fill(tab, size, x+1,y , target);
	fill(tab, size, x-1,y , target);
	fill(tab, size, x, y + 1, target);
	fill(tab, size, x, y - 1, target);
}
void flood_fill(char**tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x];
	if (target != 'F')
		fill(tab, size, begin.x, begin.y, target);
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[]={
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};
	char** area = make_area(zone, size);
	for (int i=0;i<size.y;++i)
		printf("%s\n", area[i]);
	printf("\n");
	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i=0;i < size.y;i++)
		printf("%s\n", area[i]);
	return 0;
}
