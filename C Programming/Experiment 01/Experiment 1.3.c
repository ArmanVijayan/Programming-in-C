//Write a C program to add two numbers and take a number from the user.
#include <stdio.h>

int main() {
    printf("Name: Pranav Tyagi\nSAP ID: 590027591\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int a,b,sum;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum is %d",sum);
    return 0;
}