//Experiment 2.2: WAP a C program to Convert temperature from Celsius to f using the formula: F = (C * 9/5) + 32
#include <stdio.h>

int main() {

    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f f\n", c, f);

    return 0;
}
