#include <stdio.h>

int main(void)
{
	long long int i, j, k;

	scanf("%lld %lld %lld", &i, &j, &k);
	printf("%lld\n%.1f", i + j + k, (i + j + k) / 3.0);
	return (0);
}
