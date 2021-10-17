#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *call;
	int count;
	
	scanf("%d", &count);
	call = (int *)malloc(sizeof(int) * count);
	for(int i = 0; i < count; i++)
		scanf("%d", &call[i]);
	for (int i = count - 1; i > -1; i--)
		printf("%d ", call[i]);
	return (0);
}
