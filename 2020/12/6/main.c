#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"game.h"

void menu()
{
	printf("*********************************\n");
	printf("*********1   进入游戏    ********\n");
	printf("*********0   退出游戏    ********\n");
	printf("*********************************\n");
}
 
void tic_tac()
{
	char ret = 0;
	char arr[ROWS][COLS];
	Init_board(arr, ROWS, COLS);          //初始化棋盘
	Display_board(arr, ROWS, COLS);       //打印棋盘
	while (1)
	{
		Player_move(arr, ROWS, COLS);		//玩家走
		Display_board(arr, ROWS, COLS);		//显示棋盘
		ret = CheckWin(arr, ROWS, COLS);	//判断输赢
		if (ret != 'q')
		{
			break;
		}
		Computer_move(arr, ROWS, COLS);		//电脑走
		Display_board(arr, ROWS, COLS);		//显示棋盘
		ret = CheckWin(arr, ROWS, COLS);	//判断输赢
		if (ret != 'q')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	if (ret == ' ')
	{
		printf("平局");
	}

}

void test()
{
	int number = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &number);
		switch (number)
		{
		case 1:
			tic_tac();
			break;
		case 2:
			break;
		default:
			printf("输入错误，重新选择\n");
			break;
		}
	} while (number);
}

int main()
{
	test();
	return 0;
}
