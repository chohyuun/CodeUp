#include <stdio.h>

int main(void)
{
	int i;

	reget:
	scanf("%d", &i);
	if (i == 0)
		return (0);
	printf("%d\n", i);
	goto reget;
	return (0);
}
