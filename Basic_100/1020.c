#include <stdio.h>

int main(void)
{
	int birth, idnum;

	scanf("%d-%d", &birth, &idnum);
	printf("%06d%07d", birth, idnum);
	return (0);
}
