#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* student;
	int* call;
	int count;

	scanf("%d", &count);

	student = (int *)malloc(sizeof(int) * count);
	call = (int *)malloc(sizeof(int) * 23);
	
	for (int i = 0; i < count; i++)
		scanf("%d", &student[i]);
	for (int i = 0; i < 23; i++)
		call[i] = 0;
	for(int i = 0; i < count; i++)
		call[student[i] - 1] ++;
	for(int i = 0; i < 23; i++)
		printf("%d ", call[i]);
	return (0);
}
