/*
第2章的编程练习 2
 */
#include<stdio.h>
#include<stdlib.h>
#define NAME "Stephen Prata"
#define ADDRESS "No.aa Chengshou Street, Fengtai DIstrict, Beijing"
/* 
    姓名、地址分别用预编译指令定义
 */
int main(int argc,char **argv)
{
    printf("%s\n",NAME);
    /* 打印姓名 */
    printf("%s\n",ADDRESS);
    /* 打印地址 */
   return 0;
}