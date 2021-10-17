#include <stdio.h>

int main(void)
{
	int place[19][19] = {0};
	int count, x, y;

	scanf("%d", &count);
	for(int i = 0; i < count; i++)
	{
		scanf("%d %d", &x, &y);
		place[x - 1][y - 1] = 1;
	}
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
			printf("%d ", place[i][j]);
		printf("\n");
	}
	return (0);
}
