#include <stdio.h>

int main(void)
{
	int a, b, c, day;

	scanf("%d %d %d", &a, &b, &c);
	for (day = 1; ; day++)
	{
		if (!(day % a) &&  !(day % b) && !(day % c))
			break;
	}
	printf("%d", day);
	return (0);
}
