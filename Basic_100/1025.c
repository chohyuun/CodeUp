#include<stdio.h>

int main(void)
{
	int a, j;

	scanf("%d", &a);
	for(int count = 0; count < 5; count ++)
	{
		j = 1;
		for(int i = 4; i > count; i--)
		{
			j *= 10;
		}
		printf("[%d]\n", (a / j) * j);
		a -= (a / j) * j;
	}
	return (0);
}
