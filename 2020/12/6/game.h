#include<time.h>
#include<stdio.h>
#include<string.h>
#include<Windows.h>

#define ROWS 3			 //控制行的大小
#define COLS 3           //控制列的大小

void Init_board(char arr[ROWS][COLS], int ROW, int COL);        //初始化棋盘
void Display_board(char arr[ROWS][COLS], int ROW, int COL);     //打印棋盘
void Player_move(char arr[ROWS][COLS], int ROW, int COL);		//玩家走
char CheckWin(char arr[ROWS][COLS], int ROW, int COL);			//判断输赢
void Computer_move(char arr[ROWS][COLS], int ROW, int COL);		//电脑走
