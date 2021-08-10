/* 
第2章的编程练习 7
 */
int smile(void);
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv){
    smile();smile();smile();
    printf("\n");
    /* 打印第1行，3个“Smile! */
    smile();smile();
    printf("\n");
    /* 打印第2行，2个“Smile! */
    smile();
    printf("\n");
    /* 打印第3行，1个“Smile! */
    return 0;
}
int smile(void){
    printf("Smile!");
    return 0;
}