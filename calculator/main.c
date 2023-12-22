#include <stdio.h>
//#include <math.h>
#include "file.h"
//#include "./header/subtraction.h"
//#include "./header/multiplication.h"
//#include "./header/division.h"
//#include "./header/mdulus.h"
int main() {

    float num1, num2;
    char ch;
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    printf("enter the operation ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case('+'):
            printf("%f",add(num1,num2));
            break;
        case('-'):
            printf("%f",subtract(num1,num2));
            break;
        case('/'):
            printf("%f",divide(num1,num2));
            break;
        case('*'):
            printf("%f",mult(num1,num2));
            break;
//        case('%'):
//            printf("%f",Mod(num1,num2));
//            break;
    }
    
    return 0;
}
