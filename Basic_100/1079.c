#include <stdio.h>

int main(void)
{
	char c = ' ';

	while (c != 'q')
	{
		scanf("%c", &c);
		printf("%c", c);
	}
	return (0);
}
