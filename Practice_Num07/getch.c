#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int ch;

	while ((ch= _getch()) != 'q')		//EOF��� �Ұ�, ctrl�� ���ڷ� �Է��ϱ� ����
	{
		_putch(ch);
	}
	return 0;
}