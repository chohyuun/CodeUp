#include <stdio.h>

int main(void)
{
	long long int a, r, n, count;

	scanf("%lld %lld %lld", &a, &r, &n);
	for(count = 1; count != n; a *= r)
		count ++;
	printf("%lld", a);
	return (0);
}

