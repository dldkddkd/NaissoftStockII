#include "Arts.h"


#include <stdio.h>
#include <Windows.h>

void startLogo()
{
	setcursortype(NOCURSOR);

	Sleep(500);
	textcolor(8);
	gotoxy(48, 15), printf("ⓒ 2013~2016 Naissoft");
	Sleep(65);
	textcolor(7);
	gotoxy(48, 15), printf("ⓒ 2013~2016 Naissoft");
	Sleep(65);
	textcolor(15);
	gotoxy(48, 15), printf("ⓒ 2013~2016 Naissoft");
	Sleep(1000);
	textcolor(7);
	gotoxy(48, 15), printf("ⓒ 2013~2016 Naissoft");
	Sleep(65);
	textcolor(8);
	gotoxy(48, 15), printf("ⓒ 2013~2016 Naissoft");
	Sleep(65);
	system("cls");
	textcolor(7);
	Sleep(1000);
	textcolor(8);
	gotoxy(1, 1), printf("주의");
	Sleep(75);
	textcolor(7);
	gotoxy(1, 1), printf("주의");
	Sleep(75);
	textcolor(15);
	gotoxy(1, 1), printf("주의");
	Sleep(600);
	gotoxy(1, 3);
	printf("이 게임은 실제 주식 투자와 다릅니다. 실제로 주식 투자를 할 때 주의하십시오.\n 게임 안의 회사는 실존 회사를 묘사하지 않으며, 그 내용은 모두 허구입니다.\n 소스 코드는 공개되어 있지만,");
	printf(" 변형하여 판매하는 등의 상업적 행위는 할 수 없습니다.");
	Sleep(3000);
	textcolor(7);
	gotoxy(1, 1), printf("주의");
	Sleep(75);
	textcolor(8);
	gotoxy(1, 1), printf("주의");
	Sleep(75);
	system("cls");
	textcolor(7);
	Sleep(1000);

	setcursortype(NORMALCURSOR);
}

void printMainMenu()
{
	printf("\n\n\t\t\t\t\t         Stock II - 주식 게임 2");
	printf("\n\n\n\t\t\t\t\t    항목을 선택해 주시기 바랍니다.");
	printf("\n\n\t\t\t\t\t        「 새로 시작하기 : 1」");
	printf("\n\n\t\t\t\t\t        「  불 러 오 기  : 2」");
	printf("\n\n\t\t\t\t\t        「  종       료  : 3」");
}