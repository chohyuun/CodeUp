#include <stdio.h>

int main(void)
{
	char c1, c2 = 'a';

	scanf("%c", &c1);
	do {
		printf("%c ", c2++);
	}while (c2 != c1);
	printf("%c", c1);
	return (0);
}
