#include <stdio.h>

int main(void)
{
	int i;

	scanf("%d", &i);
	if (i < 0)
		printf("minus\n");
	else
		printf("plus\n");
	if (i % 2)
		printf("odd\n");
	else
		printf("even\n");
	return (0);
}
