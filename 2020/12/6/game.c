#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"game.h"

void Init_board(char arr[ROWS][COLS], int ROW, int COL)        //初始化棋盘
{
	memset(arr, ' ', ROWS*COLS * sizeof(arr[0][0]));           //所有元素变为空
}

void Display_board(char arr[ROWS][COLS], int ROW, int COL)     //打印棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)								//分行
	{
		for (j = 0; j < COL; j++)							//打印行的第一部分
		{
			printf(" %c ", arr[i][j]);
			if (j < ROW - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)									//打印行的第二部分
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void Player_move(char arr[ROWS][COLS], int ROW, int COL)		//玩家走
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("输入坐标 :");
		scanf("%d %d", &a, &b);
		if (a < 1 || a >ROW || b < 1 || b > COL)
		{
			printf("非法坐标");
		}
		if (arr[a - 1][b - 1] != ' ')                          //接收的坐标比实际数组下标大一
		{
			printf("已经有棋子了！");
		}
		if (arr[a - 1][b - 1] == ' ')
		{
			arr[a - 1][b - 1] = '*';
			break;
		}
	}
}

char full_borad(char arr[ROWS][COLS], int ROW, int COL) //判断是否满了
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (arr[i][j] == ' ')						//有空不为满
				return ' ';
		}
	}
	return 'q';
}

char CheckWin(char arr[ROWS][COLS], int ROW, int COL)			//判断输赢  '*'玩家获胜 'q'平局 '#'电脑获胜
{
	int people = 0;
	int computer = 0;
	char full;
	people = ROW_win(arr, ROW, COL, '*');//判断行获胜
	computer = ROW_win(arr, ROW, COL, '#');
	if (people == ROW)
	{
		return '*';
	}

	if (computer == ROW)
	{
		return '#';
	}

	people = COL_win(arr, ROW, COL, '*'); //判断列获胜
	computer = COL_win(arr, ROW, COL, '#');
	if (people == COL)
		return '*';
	if (computer == COL)
		return '#';

	people = Sideways(arr, ROW, COL, '*'); //判断斜右获胜
	computer = Sideways(arr, ROW, COL, '#');
	if (people == COL)
		return '*';
	if (computer == COL)
		return '#';

	people = Sideways2(arr, ROWS, COLS, '*'); //判断斜左获胜
	computer = Sideways2(arr, ROWS, COLS, '#');
	if (people == COLS)
		return '*';
	if (computer == COLS)
		return '#';

	full = full_borad(arr, ROWS, COLS);      //判断是否平局
	if (full == 'q')
		return ' ';

	return 'q';
}

int ROW_win(char arr[ROWS][COLS], int ROW, int COL, char c) //横着获胜返回长度，不然返回0
{
	int count = 0;
	int j = 0;
	int i = 0;
	for (j = 0; j < COLS; j++)
	{
		for (i = 0; i < ROWS; i++)
		{
			if (arr[j][i] == c)
				count++;
		}
		if (count == ROWS)                //判断每一行
			break;
		else
			count = 0;
	}
	return count;
}
int COL_win(char arr[ROWS][COLS], int ROW, int COL, char c) //竖着获胜返回长度，不然返回0
{
	int count = 0;
	int j = 0;
	int i = 0;
	for (j = 0; j < COLS; j++)
	{
		for (i = 0; i < ROWS; i++)
		{
			if (arr[i][j] == c)
				count++;
		}
		if (count == COLS)                  //判断每一列
			break;
		else
			count = 0;
	}
	return count;
}
int Sideways(char arr[ROWS][COLS], int ROW, int COL, char c)//斜着向右下
{
	int count = 0;
	int j = 0;
	int i = 0;
	for (i = 0; i < ROWS; i++)
	{
		if (arr[i][j] == c)
			count++;
		j++;
	}
	if (count != ROWS)
		count = 0;
	return count;
}
int Sideways2(char arr[ROWS][COLS], int ROW, int COL, char c)//斜着向左下
{
	int count = 0;
	int i = ROWS - 1;
	int j = COLS - 1;
	for (i = 0; i > ROWS; i++)
	{
		if (arr[i][j] == c)
			count++;
		j--;
	}
	if (count != ROWS)
		count = 0;
	return count;
}

void Computer_move(char arr[ROWS][COLS], int ROW, int COL)		//电脑走
{
	int a = 0;
	int b = 0;
	while (1)
	{
		a = rand() % ROWS;
		b = rand() % COLS;
		if (arr[a][b] == ' ')
		{
			arr[a][b] = '#';
			break;
		}
	}
}
