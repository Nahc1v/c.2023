#include<stdio.h>
int main(){
int dodo, gogo;
int total,deposit,change,rest,menu;
int w500, w100, w50, w10;
int cnt_dodo, cnt_gogo;
while(1)
{
    printf("dodo=70, gogo=30\n");
    printf("blank\n");
    scanf("%d %d",&cnt_dodo,&cnt_gogo);
    dodo=70*cnt_dodo;
    gogo=30*cnt_gogo;
    total=dodo+gogo;
    printf("all=%d\n",total);
    printf("money?\n");
    scanf("%d",&deposit);
    if(deposit>total){
        change=deposit-total;
        w500=change/500;
        rest=change%500;
        w100=rest/100;
        rest=rest%100;
        w50=rest/50;
        rest=rest%50;
        w10=rest/10;
        printf("d0d0 all=%d\n",dodo);
        printf("gogo all=%d\n",gogo);
        printf("rest=%d\n",change);
        printf("####max####\n\n");
        printf("500:%d\n",w500);
        printf("100:%d\n",w100);
        printf("50:%d\n",w50);
        printf("10:%d\n",w10);
        printf("\n###########################\n\n");
        printf("continue? more = 1, out = 0");
        scanf("%d",&menu);
        if(menu==0) break;
        else continue;
    }
    else{
        printf("bujok more=1 out=0");
        scanf("%d",&menu);
        if(menu==0) break;
        else continue;
    }
}
return 0;
}