#include <stdio.h>

int main(void)
{
	int a, d, n, count;

	scanf("%d %d %d", &a, &d, &n);
	for (count = 1; count != n; a += d)
		count ++;
	printf("%d", a);
	return (0);
}
