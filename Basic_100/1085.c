#include<stdio.h>

int main(void)
{
	unsigned int h, b, c, s;
	double save;

	scanf("%d %d %d %d", &h, &b, &c, &s);
	save = (h * b * c * s)/ (8.0 * 1024 * 1024);
	printf("%.1f MB", save);
	return (0);
}
