//Experiment 3.1: WAP to compute the BMI Index of the person and print the BMI values as per the following ranges.
//You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).

#include <stdio.h>

int main() {

    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    float weight, height, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nYour BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Category: Normal weight\n");
    }
    else if (bmi >= 25.0 && bmi < 29.9) {
        printf("Category: Overweight\n");
    }
    else {
        printf("Category: Obese\n");
    }

    return 0;
}
