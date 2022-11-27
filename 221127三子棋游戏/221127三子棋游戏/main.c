//
//  main.c
//  demmo
//
//  Created by 兰兰王 on 2022/10/26.
//
#include <string.h>
#include <ctype.h>
#include<math.h>
#include "game.h"
void game(char arr[ROW][COL],int row,int col){
//     char arr[ROW][COL]={0};
     arr_ini(arr,row,col);
     arr_display(arr,ROW,COL);
    char ret=0;
    while(1){
     player_move(arr,ROW,COL);
     arr_display(arr, ROW, COL);
     printf("**********************\n");
     ret=is_win(arr,ROW,COL);
     if(ret!='C')
         break;
     computer_move(arr,ROW,COL);
     arr_display(arr, ROW, COL);
    printf("*******************\n");
     ret=is_win(arr,ROW,COL);
        if(ret!='C')
            break;
        
    }
    if(ret=='P')
        printf("平局");
    else if (ret=='*')
        printf("人win");
    else
        printf("电脑win");
}
int main(int argc, const char * argv[]) {
    int ans=1;
    char arr[ROW][COL]={0};
    srand((unsigned int)time(NULL));
    printf("do you want to play a game 1 to play 0 to not play\n");
    scanf("%d",&ans);
    while(ans){
        game(arr,ROW,COL);
        printf("do you want to play a game 1 to play 0 to not play\n");
        scanf("%d",&ans);
        
    }
    
    

    return 0;
    
};

   





