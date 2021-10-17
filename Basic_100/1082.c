#include <stdio.h>

int main(void)
{
	int i;

	scanf("%X", &i);
	for(int j = 1; j < 16; j++)
	{
		printf("%X*%X=%X\n", i, j, i * j);
	}
	return (0);
}
