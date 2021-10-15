#include <stdio.h>

int main(void)
{
	int i;

	while (1)
	{
		scanf("%d", &i);
		if (i == 0)
			return (0);
		printf("%d\n", i);
	}
	return (0);
}
