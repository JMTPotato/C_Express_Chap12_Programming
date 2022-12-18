#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int ch;

	while ((ch= _getch()) != 'q')		//EOF사용 불가, ctrl도 문자로 입력하기 때문
	{
		_putch(ch);
	}
	return 0;
}