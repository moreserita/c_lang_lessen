#include <stdio.h>
int main(void){
    int age;
    printf("年齢を入力してください\n");
    scanf("%d",&age); 
    if(age >= 20){
        printf("お酒が飲めます");
    }else{
        printf("お酒が飲めません");
    }
    return 0;
}
