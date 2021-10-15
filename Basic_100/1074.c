#include <stdio.h>

int main(void)
{
	int i;

	scanf("%d", &i);
	while (i)
		printf("%d\n", i--);
	return (0);
}
