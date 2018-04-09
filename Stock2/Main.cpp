//
// Stock II
// (c) 2016~2018 Naissoft.
//

#include "GameFunctions.h"

int main(void)
{
	//Initialize value
	int menu, cnt, order;
	char key, pausemenu;

	//Set window console
	system("title Stock 2 - �ֽ� ���� 2");

	system("mode con: cols=120 lines=40");

	//Copyright
	startLogo();

	printMainMenu();
	scanf("%d", &menu);

	//Initialize game setting
	InitStock();
	init();
	cnt = month = day = hour = order = 0;

	
	switch (menu)
	{
	case 1:
		ChangeStockPrice();
		save();
		break;
	case 2:
		load();
		break;
	case 3:
		exit(0);
		break;
	default:
		//TODO: if user enter default value, program should announce 'it's wrong value'
		break;
	}

	system("cls");
	
	drawNewspaper(companyOrder[order]);
	
	while (true)
	{	
		ShowMain();
		DrawGraph(companyOrder[order]);
		showCompanyReport(companyOrder[order]);
		
		if (Money <= 0)
		{
			printf("\n �Ļ�... 3000�� ������ �帮�ڽ��ϴ�.");
			getchar();
			loan(3000);
			system("cls");
		}
		
		gotoxy(57, 10 + order - 1);
		printf("  ");
		gotoxy(57, 10 + order + 1);
		printf("  ");
		gotoxy(57, 10 + order);
		printf("��");

		key = '\0';
		getKey(&key);

		switch (key)
		{
		case 'b':
		case 'B':
			buyMenu(companyOrder[order]);
			break;
		case 'v':
		case 'V':
			showStockList();
			break;
		case 27:
			system("cls");
			titleLine("�Ͻ� ����");
			printf(" 1. ��  ��\n\n 2. ��  ��\n\n 3. ��  ��\n\n 4. ��  ��\n\n 5. ������\n\n Esc ���ư���");

			pausemenu = getch();
			
			switch (pausemenu)
			{
			case '1':
				showStats();
				break;
			case '2':
				loanMenu();
				break;
			case '3':
				payback();
				break;
			case '4':
				settingMenu();
				break;
			case '5':
				system("cls");
				printf("\n �����Ͻðڽ��ϱ�? ������� ���� ������ ������ϴ�.\n Y / N");
				char ch;
				ch = getch();
				if (ch == 'Y' || ch == 'y') return 0;
				break;
			case 27:
				break;
			default:
				break;
			}
			system("cls");
			Sleep(100);
			break;
		case 's':
		case 'S':
			sellMenu();
			break;
		case 'E':
		case 'e':
			system("cls");
			save();
			printf("\n ������ ����Ǿ����ϴ�.");
			Sleep(300);
			break;
		case 'W':
		case 'w':
			if (timemode == 1)
			{
				while (cnt % 20 != 0) cnt++;
				cnt += 20;
				Sleep(100);
			}
			break;
		case 'I':
		case 'i':
			showCompanyInfo();
			break;
		case '2':
			if (order < MAX_COMPANY - 1) order++;
			drawNewspaper(companyOrder[order]);
			break;
		case '8':
			if (order > 0) order--;
			drawNewspaper(companyOrder[order]);
			break;
		default:
			break;
		}
		for (int i = 0; i < MAX_COMPANY; i++)
			PrevStockPrice[i] = StockPrice[i];

		if (cnt % 20 == 0)
		{
			ChangeStockPrice();
			UpdateGraphData();
		}
		
		if (cnt % 20 == 0) hour++;

		if (cnt % 60 == 0) showTipNews();

		if (hour == 1)
		{
			for (int i = 0; i < MAX_COMPANY; i++)
			{
				if (rand() % 2 == 0) ifGood[i] = true;
				else ifGood[i] = false;
			}
		}
		if (hour > 23)
		{
			hour = 0;
			interest();
			day++;
		}
		if (day > days[month] - 1)
		{
			day = 0;
			month++;
			Money -= TAX(Money);
		}
		if (month > 11) month = 0;

		if (timemode == 0)
		{
			clearbuffer();
			Sleep(DELAY);
			cnt++;
		}
		else if (timemode == 1)
		{
			clearbuffer();
			Sleep(DELAY);
		}
	}
	getchar();
	UnInitStock();
	return 0;
}
