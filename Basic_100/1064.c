#include <stdio.h>

int main(void)
{
	int i, j, k;

	scanf("%d %d %d", &i, &j, &k);
	printf("%d", i < j ? (i < k ? i : k) : ( j < k ? j : k));
	return (0);
}
