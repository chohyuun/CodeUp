#include <stdio.h>

int main(void)
{
	int i;

	scanf("%d", &i);
	if (i > 89)
		printf("A");
	else if (i > 69)
		printf("B");
	else if (i > 39)
		printf("C");
	else
		printf("D");
	return (0);
}
