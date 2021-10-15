#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	scanf("%d", &i);
	for (int j = 1; j <= i; j++)
	{
		if (!(j % 2))
			sum += j;
	}
	printf("%d", sum);
	return (0);
}
