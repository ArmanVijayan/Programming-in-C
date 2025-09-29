// Experiment 1.4: Write a C-program to perform 4 types of arithmetic operations b/w 2 variables.
#include <stdio.h>

int main()
{
    printf("Name: Pranav Tyagi\nSAP ID: 590027591\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int num1,num2;
    printf("Enter the value of a: ");
    scanf("%d",&num1);
    printf("Enter the value of b: ");
    scanf("%d",&num2);
    int c=num1+num2;
    printf("%d\n",c);
    int d=num1-num2;
    printf("%d\n",d);
    int e=num1*num2;
    printf("%d\n",e);
    float f=num1/num2;
    printf("%d\n",f);

    return 0;
}