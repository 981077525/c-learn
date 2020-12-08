#define ROW 3
#define COL 3

//初始化棋盘
void BoardInit();
//打印棋盘
void BoardShow();
//玩家下子
void BoardPlayer();
//判断棋盘是否下满
char IsFull();
//判断输赢
char BoardWin();
//电脑下子
void BoardComputer();