#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//문자열의 길이를 구하는 프로그램

int main()
{
	char str[30] = "C language is easy";
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	printf("문자열 \"%s\"의 길이는 %d입니다.\n", str, i);		//\"%s\"

	return 0;
}