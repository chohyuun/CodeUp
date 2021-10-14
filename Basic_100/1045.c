#include <stdio.h>

int main(void)
{
	long long int i, j;

	scanf("%lld %lld", &i, &j);
	printf("%lld\n", i + j);
	printf("%lld\n", i - j);
	printf("%lld\n", i * j);
	printf("%lld\n", i / j);
	printf("%lld\n", i % j);
	printf("%.2f\n", (float)i / j);
	return (0);
}

