#include "Arts.h"

#include <stdio.h>
#include <conio.h>
#include <Windows.h>

void startLogo()
{
	setcursortype(NOCURSOR);
	textcolor(7);
	Sleep(300);
	textcolor(8);
	gotoxy(1, 2), printf("���� ���� �� ���۱� �ȳ�");
	Sleep(75);
	textcolor(7);
	gotoxy(1, 2), printf("���� ���� �� ���۱� �ȳ�");
	Sleep(75);
	textcolor(15);
	gotoxy(1, 2), printf("���� ���� �� ���۱� �ȳ�");
	Sleep(300);
	gotoxy(1, 6);
	printf( "%s%s%s%s%s%s%s",
			"�� ������ ���� �ֽ� ���ڿ� ����� �ٸ��ϴ�. ������ �ֽ� ���ڸ� �� ���� �����Ͻʽÿ�.\n",
			" ���� ���� ȸ��� ���� ȸ�縦 �������� ������, �� ������ ��� �㱸�Դϴ�.\n",
			" �ҽ� �ڵ带 ��������� �̿��ϴ� ���� �����Ǿ� �ֽ��ϴ�.\n",
			" �ǵ�� �� ���Ǵ� moon44432.blog.me���� �Ͻ� �� �ֽ��ϴ�.\n",
			" Stock!�� Stock II�� ���۱��� Naissoft�� �����ϰ� �ֽ��ϴ�.\n\n\n",
			" �� 2013~2018 Naissoft. All rights reserved.\n\n",
			" �����Ϸ��� �ƹ� Ű�� �����ʽÿ�.");
	getch();
	textcolor(7);
	gotoxy(1, 2), printf("���� ���� �� ���۱� �ȳ�");
	Sleep(75);
	textcolor(8);
	gotoxy(1, 2), printf("���� ���� �� ���۱� �ȳ�");
	Sleep(75);
	system("cls");
	textcolor(7);
	Sleep(300);

	setcursortype(NORMALCURSOR);
}

void printMainMenu()
{
	printf("\n\n\t\t\t\t\t        Stock II - �ֽ� ���� 2");
	printf("\n\n\n\t\t\t\t\t    �׸��� ������ �ֽñ� �ٶ��ϴ�.");
	printf("\n\n\t\t\t\t\t        ��  ���ο� ����  : 1��");
	printf("\n\n\t\t\t\t\t        ��  �� �� �� ��  : 2��");
	printf("\n\n\t\t\t\t\t        ��  ��       ��  : 3��");
}
