#include <stdio.h>

int main(void)
{
	int i, sum = 0, j;

	scanf("%d", &i);
	for(j = 1; sum < i; j++)
		sum += j;
	printf("%d", j - 1);
	return (0);
}
