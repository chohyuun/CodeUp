#include <stdio.h>

int main(void)
{
	int w, h, b;
	double mb;

	scanf("%d %d %d", &h, &w, &b);
	mb = (h * w * b) / (8 * 1024 * 1024.0);
	printf("%.2f MB", mb);
	return (0);
}
