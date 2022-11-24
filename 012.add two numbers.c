#include <stdio.h>
int main()
{
    int number1, number2;
    float res;
    printf("Enter the First Number to find = ");
    scanf("%d",&number1);
    printf("Enter the Second Number to find  = ");
    scanf("%d",&number2);
    int sm = number1 + number2;
    res = sum/2; 
    printf("The Sum of %d and %d     = %d\n", number1, number2, sm);
    printf("The Average of %d and %d = %.2f\n", number1, number2, res);
    return 0;
}
