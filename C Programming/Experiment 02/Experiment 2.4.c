//Experiment 2.4: WAP a C program to find the roots of the quadratic equations.

#include <stdio.h>
#include <math.h>

int main() {

    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


    float a,b,c,x1,x2;

    printf("Please enter the value of a");
    scanf("%f\n",&a);

    printf("Please enter the value of b");
    scanf("%f\n",&b);

    printf("Please enter the value of c");
    scanf("%f\n",&c);


    x1 = (-b + sqrt(pow(b,2.0) - 4.0*a*c)) / (2.0*a);
    x2 = (-b - sqrt(pow(b,2.0) - 4.0*a*c)) / (2.0*a);


    printf("%f\n",x1);
    printf("%f\n",x2);
    return 0;

}
