#include <stdio.h>
int main(void){
    float weight,height,bmi;
    printf("体重を入力してください\n>");
    scanf("%f",&weight);
    printf("身長を入力してください\n>");
    scanf("%f",&height);
    bmi = weight / ( height * height);
    printf("BMI %f\n",bmi);
    
        return 0;

}