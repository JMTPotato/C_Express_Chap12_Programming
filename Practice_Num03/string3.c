#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;

	printf("원본 문자열 = %s\n", src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dst[i] = src[i];
	}

	dst[i] = '\0';		//중요

	printf("복사된 문자열 = %s\n", dst);

	return 0;
}
