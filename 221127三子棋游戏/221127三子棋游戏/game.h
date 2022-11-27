//
//  game.h
//  221127三子棋游戏
//
//  Created by 兰兰王 on 2022/11/27.
//


#ifndef game_h
#define game_h
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arr_ini(char arr[ROW][COL],int,int);
void arr_display(char arr[ROW][COL],int,int);
void player_move(char arr[ROW][COL],int,int);
void computer_move(char arr[ROW][COL],int,int);
char is_win(char arr[ROW][COL],int,int);
#endif /* game_h */
