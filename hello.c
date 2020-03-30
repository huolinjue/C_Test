#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	scanf("%s", str);
	int len = strlen(str);
	printf("%d:%s",len,str);
	return 0;
}