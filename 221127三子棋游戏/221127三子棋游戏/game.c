//
//  game.c
//  demmo
//
//  Created by 兰兰王 on 2022/11/24.
//

#include "game.h"
//棋盘初始化
int is_full(char arr[ROW][COL],int row,int col){
    int i=0;
    int j=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j]==' ')
                return 0;
        }
    }
    return 1;
}
void arr_ini(char arr[ROW][COL],int row,int col){
    int i=0;
    int j=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            arr[i][j]=' ';//存储的是空字符
        }
    }
}
//棋盘显示
void arr_display(char arr[ROW][COL],int row,int col){
    int i=0;
    int j=0;
    for (i=0; i<ROW; i++) {
        for(j=0;j<COL;j++){
            printf(" %c ",arr[i][j]);
            if(j!=COL-1){
                printf("|");
            }
            
        }
        printf("\n");
        if(i!=ROW-1){
            for(j=0;j<COL;j++){
                printf("___");
                if(j!=COL-1){
                    printf("|");
                }
        }
            printf("\n");
    }
    
}
}
void player_move(char arr[ROW][COL],int row,int col){
    int x=0;
    int y=0;
//    printf("人动:\n");
//    scanf("%d %d",&x,&y);
    while(1){
        printf("人动:\n");
        scanf("%d %d",&x,&y);
        if((x<=ROW && x>=1) &&(y<=COL && y>=1)&&(arr[x-1][y-1]==' ')){
        
            arr[x-1][y-1]='*';
            break;
        }
    }
}
void computer_move(char arr[ROW][COL],int row,int col){
    int x=0;
    int y=0;
    while(1){
        x=rand()%ROW;
        y=rand()%COL;
        if(arr[x][y]==' '){
            arr[x][y]='#';
            break;
        }
    }
}
char is_win(char arr[ROW][COL],int row,int col){
    int i=0;
    int j=0;
//int full=0;
    for(i=0;i<row;i++){
        if((arr[i][0]==arr[i][1])&&(arr[i][1]==arr[i][2])&&(arr[i][1]!=' ')){
            return arr[i][0];
        }
    }
    for(j=0;j<col;j++){
            if((arr[0][j]==arr[1][j])&&(arr[1][j]==arr[2][j])&&(arr[1][j]!=' ')){
                return arr[1][j];
            }
    }
    if((arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2])&&(arr[1][1]!=' ')){
        return arr[1][1];}
    if((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0])&&(arr[1][1]!=' ')){
        return arr[1][1];}
    if(is_full(arr, row, col))
        return 'P';
    else
        return 'C';
    
}
    





