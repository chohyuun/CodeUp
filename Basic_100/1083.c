#include <stdio.h>

int main(void)
{
	int i;

	scanf("%d", &i);
	for(int j = 1; j <= i; j++)
	{
		if (!(j % 3))
			printf("X ");
		else
			printf("%d ", j);
	}
	return (0);
}
