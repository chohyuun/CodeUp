#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* str;

	str = (char*)malloc(sizeof(char) * 2001);
	fgets(str, 2000, stdin); //scan include space
	printf("%s", str);
	free(str);
	return (0);
}
