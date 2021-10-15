#include <stdio.h>

int main(void)
{
	int i[3];

	scanf("%d %d %d", &i[0], &i[1], &i[2]);
	for (int j = 0; j < 3; j++)
	{
		if (i[j]%2)
			printf("odd\n");
		else
			printf("even\n");
	}
	return (0);
}
	
