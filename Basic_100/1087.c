#include <stdio.h>

int main(void)
{
	unsigned int num, sum = 0;
	
	scanf("%d", &num);
	for(int i = 1; sum < num; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return (0);
}

