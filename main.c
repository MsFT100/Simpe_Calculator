#include <stdio.h>
#include <stdlib.h>

//created by Lennox Mathew
int main()
{
    printf("Available Values: \n \n 1. Addition : + \n 2. Subtraction : - \n 3. Division : / \n ");
    printf("Please Input your values to be calculated\n \n \n");

    char Operator;
    float firstValue;
    float secondValue;
    float result;

    printf("Enter your Operator__");
    scanf("%c", &Operator);
    printf("Enter your FirstValue press enter and enter your second value: \n");
    scanf("%f%f", &firstValue, &secondValue);


    switch(Operator){
        case '+':
            result = firstValue + secondValue;

            break;
        case '-':
            result = firstValue - secondValue;
            break;
        case '/':
            result = firstValue / secondValue;
            break;
    }

    printf("The answer is \n");
    printf("%f ", firstValue);
    printf("%c ", Operator);
    printf("%f", secondValue);
    printf(" = %f", result);
    return 0;
}
