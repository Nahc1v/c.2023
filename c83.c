#include<stdio.h>
int main(){
    char string[30];
    fgets(string,30,stdin);
    printf("input:%s\n",string);
    gets(string);
    printf("INPUT:%s\n",string);
    return 0;
}