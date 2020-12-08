#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
//初始化棋盘
void BoardInit(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void BoardShow(char board[ROW][COL],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		printf("##################\n|");
		printf("    |     |     |\n|");
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			printf(" | ");
		}

		printf("\n");
		printf("|    |     |     |\n");
	}
	printf("##################\n");
}
//玩家下子
void BoardPlayer(char board[ROW][COL], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("请输入你要下子的坐标：");
		scanf("%d %d", &x, &y);
		if (x<0 || y<0 || x>row || y>col)
		{
			printf("输入的坐标不合法，请重新输入\n");
			continue;
		}
		else if (board[x][y] != ' ')
		{
			printf("该位置已经有子了，请重新下\n");
			continue;
		}
		else
		{
			board[x][y] = 'M';
			break;
		}
	}
}

char IsFull(char board[ROW][COL], int row, int col)
{
	//判断是否满子
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 'Q';
}
//判断输赢
//'Q'代表平局，'P'代表玩家赢，'C'代表电脑赢 
char BoardWin(char board[ROW][COL], int row, int col)
{
	//判断行赢
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
		{
			if(board[i][0] == 'M')
			{
				return 'P';
			}
			else if (board[i][0] == 'C')
			{
				return 'C';
			}
		}
	}
	//判断列赢
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
		{
			if (board[0][i] == 'M')
			{
				return 'P';
			}
			else if (board[0][i] == 'C')
			{
				return 'C';
			}
		}
	}
	//判断斜赢
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0])
	{
		if (board[1][1] == 'M')
		{
			return 'P';
		}
		else if (board[1][1] == 'C')
		{
			return 'C';
		}
	}
	
	IsFull(board, ROW, COL);
}

//电脑下子
void BoardComputer(char board[ROW][COL],int row,int col)
{
	srand(time(NULL));
	
	while (1)
	{	
		int x = rand() % 3;
		int y = rand() % 3;
		if (board[x][y] != ' ')
		{
			continue;
		}
		else
		{
			board[x][y] = 'C';
			break;
		}
	}
}