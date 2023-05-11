#include<stdio.h>
int main(){
    int num,encrypt,passwd,key=1004;
    printf("num:"),scanf("%d",&num);
    encrypt =num^key;
    printf("encrypt: %d\n",encrypt);
    printf("key:"),scanf("%d",&passwd);
    printf("okey: %d\n",encrypt^passwd);
    return 0;
}