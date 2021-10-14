#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* str;

	str = (char*)malloc(sizeof(char) * 51);
	scanf("%s", str);
	printf("%s", str);
	return (0);
}
