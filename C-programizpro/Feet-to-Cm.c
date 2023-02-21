#include<stdio.h>

float FeetToCm(float feet);
float Cm(float cm1, float cm2);

int main(){
    float feet1, feet2, cm1, cm2, sum;
    printf("Enter the first in feet: ");
    scanf("%f", &feet1);
    printf("Enter the second in feet: ");
    scanf("%f", &feet2);
    cm1 = FeetToCm(feet1);
    cm2 = FeetToCm(feet2);
    sum = Cm(cm1, cm2);
    printf("sum in cm is %.2f cm.\n", sum);
    return 0;
}

float FeetToCm(float feet){
    float cm;
    cm = feet * 30.48;
    return cm;
}

float Cm(float cm1, float cm2){
    float sum;
    sum = cm1 + cm2;
    return sum;
}
