// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    float cel, fa;
 
    printf("Please Enter temp in Celsius: ");
    scanf("%f", &cel);
 
    fa = ((cel * 9)/5) + 32;
    
    printf("\n %.2f Celsius = %.2f Fahrenheit", cel, fa);
 
    return 0;
}
