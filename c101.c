#include<stdio.h>
int main(){
    int input_sec,hr,Min,sec;
    printf("s:"),scanf("%d",&input_sec);
    hr=input_sec/3600;
    Min=input_sec%3600/60;
    sec=input_sec%60;
    printf("%2dh %2dm %2ds\n",hr,Min,sec);
    return 0;
}