#include <stdio.h>

int main(void)
{
	int i, j;

	scanf("%d %d", &i, &j);
	printf("%d", i == j ? 1 : 0);
	return (0);
}
