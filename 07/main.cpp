#include <stdio.h>
int main(void){
    float weight,height,bmi;
   while(true){
       printf("身長を入力してください\n");
       scanf("%f",&height);
       if(height != 0){
           break;
       }
       printf("エラーです。再度入力してください\n");
      
   }
    printf("体重を入力してください\n>");
    scanf("%f",&weight);
    if(height > 3){
        height /= 100;  //height = height / 100;
    }
    bmi = weight / ( height * height);
    printf("BMI %f\n",bmi);
    
        return 0;
}