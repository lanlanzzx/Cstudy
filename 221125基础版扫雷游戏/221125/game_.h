//
//  game_.h
//  221125
//
//  Created by 兰兰王 on 2022/11/25.
//

#ifndef game__h
#define game__h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS ROW+2
#define leis 80
void arr_ini(char arr[ROWS][COLS],int row,int col,char set);
void arr_display(char arr[ROWS][COLS],int row,int col);
void arr_set(char arr[ROWS][COLS],int row,int col);
void arr_find(char arr[ROWS][COLS],char show[ROWS][COLS],int row,int col);
#endif /* game__h */
