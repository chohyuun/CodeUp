#include <stdio.h>

int main(void)
{
	int i, j, k;

	scanf("%d %d %d", &i, &j, &k);
	if (!(i%2))
		printf("%d\n", i);
	if (!(j%2))
		printf("%d\n", j);
	if (!(k%2))
		printf("%d\n", k);
	return (0);
}
