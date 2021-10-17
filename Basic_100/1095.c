#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *call;
	int count, small = 24;
	
	scanf("%d", &count);
	call = (int *)malloc(sizeof(int) * count);
	for(int i = 0; i < count; i++)
	{
		scanf("%d", &call[i]);
	}
	for(int i = 0; i < count; i++)
	{
		if (small > call[i])
			small = call[i];
	}
	printf("%d", small);
	return (0);
}
