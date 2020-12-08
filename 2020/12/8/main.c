#include <stdio.h>
#include "game.h"
//菜单函数
void menu()
{
	printf("##########################\n");
	printf("#########三子棋小游戏#####\n");
	printf("##########1.开始游戏######\n");
	printf("##########0.退出游戏######\n");
	printf("##########################\n");
}
void game()
{

	char board[ROW][COL];
	BoardInit(board, ROW, COL);
	BoardShow(board, ROW, COL);
	while (1)
	{
		BoardPlayer(board, ROW, COL);
		BoardShow(board, ROW, COL);
		char ret;
		int num = 1;
		ret = BoardWin(board, ROW, COL);
		if (ret == 'P')
		{
			printf("玩家获胜，游戏结束\n");
			break;
		}
		else if (ret == 'C')
		{
			printf("电脑获胜，游戏结束\n");
			break;
		}
		else if (ret == 'Q')
		{
			printf("游戏平局\n");
			break;
		}
		else
		{
			printf("继续\n");
		}
		BoardComputer(board, ROW, COL);
		ret = BoardWin(board, ROW, COL);
		if (ret == 'M')
		{
			printf("玩家获胜，游戏结束\n");
			break;
		}
		else if (ret == 'C')
		{
			printf("电脑获胜，游戏结束\n");
			break;
		}
		else if (ret == 'Q')
		{
			printf("游戏平局\n");
			break;
		}
		else
		{
			printf("继续\n");
		}
		BoardShow(board, ROW, COL);
	}
	
}
int main()
{
	int input;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("您已经退出游戏了\n");
			break;
		default:
			printf("输入非法，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}