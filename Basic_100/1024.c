#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str;

	str = (char*)malloc(sizeof(char) * 30);
	scanf("%s", str);
	while (*str)
	{
		printf("'%c'\n", *str);
		str ++;
	}
	free(str);
	return (0);
}
