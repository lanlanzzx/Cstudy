//
//  main.c
//  221125
//
//  Created by 兰兰王 on 2022/11/25.
//

#include "game_.h"
void game(){
    char arr[ROWS][COLS]={0};
    char show[ROWS][COLS]={0};
    arr_ini(arr,ROWS,COLS,'0');
    arr_display(arr,ROW,COL);
    arr_ini(show,ROWS,COLS,'*');
    arr_display(show,ROW,COL);
    
    arr_set(arr,ROW,COL);
    arr_display(arr,ROW,COL);
    arr_find(arr,show,ROW,COL);
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int ans=0;
    srand((unsigned int)time(NULL));
    printf("1 to play 0 to exit\n");
    scanf("%d",&ans);
    while(ans){
        game();
        printf("1 to play 0 to exit");
        scanf("%d",&ans);
    }
    
    return 0;
}
