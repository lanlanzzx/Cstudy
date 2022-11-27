//
//  game.c
//  221125
//
//  Created by 兰兰王 on 2022/11/25.
//

#include "game_.h"
int lei_count(char show[ROWS][COLS],int x,int y){
    return show[x-1][y-1]+show[x-1][y]+show[x-1][y+1]+show[x][y-1]+show[x][y+1]+show[x+1][y-1]+show[x+1][y]+show[x+1][y+1]-8*'0';
}
void arr_ini(char arr[ROWS][COLS],int row,int col,char set){
    int i=0;
    int j=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            arr[i][j]=set;
        }
    }
}
void arr_display(char arr[ROWS][COLS],int row,int col){
    int i=0;
    int j=0;
    for(i=0;i<=row;i++){
        printf("%d ",i);
        }
    printf("\n");
    for(i=1;i<=row;i++){
        printf("%d ",i);
        for(j=1;j<=col;j++){
            printf("%c ",arr[i][j]);}
        printf("\n");
    }
}
void arr_set(char arr[ROWS][COLS],int row,int col){
    int count=leis;
    int x=0;
    int y=0;
    while(count){
        x=rand()%row+1;
        y=rand()%col+1;
        if(arr[x][y]!='1'){
            arr[x][y]='1';
            //count=count-1;
            count--;
//            printf("%d\n",count);
//            printf("%d %d\n",x,y);
        }
    }
}
void arr_find(char arr[ROWS][COLS],char show[ROWS][COLS],int row,int col){
    int x=0;
    int y=0;
    printf("输入的数据\n");
    int count=0;
    
    while(count<ROW*COL-leis){
        scanf("%d %d",&x,&y);
        if((x<=ROW && x>=1)&&(y<=COL && y>=1)){
            if(arr[x][y]=='1'){
                printf("你被炸死了");
            }
            else{
                show[x][y]=lei_count(arr, x, y)+'0';
                count++;
             }
            
        }
        else{
            printf("输入新的x和y");
        }
    }
   if(count==ROW*COL-leis)
       printf("恭喜 扫雷成功\n");
    
}
