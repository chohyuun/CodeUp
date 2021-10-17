#include <stdio.h>

int main(void)
{
	long long int a, m, d, n;

	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
	for(int count = 1; count != n; a = a * m  + d)
		count ++;
	printf("%lld", a);
	return (0);
}
