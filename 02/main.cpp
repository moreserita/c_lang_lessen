#include <stdio.h>
int main(void){
    int i = 0;
    int j = 0;
    int wa , seki, sa, syo; 
    j = 9;
    i = 7;
    wa = i + j;
    seki = i * j;
    sa = i - j;
    syo = i / j;
    
    printf("和 : %d\n",wa);
    printf("積 : %d\n",seki);
    printf("差 : %d\n",sa);
    printf("商 : %d\n",syo);

}