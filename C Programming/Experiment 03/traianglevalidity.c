//Experiment 3.2: WAP to check if the triangle is valid or not.
//If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene.
//Take sides of the triangle as input from a user.

#include <stdio.h>
int main() {

    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int side1,side2,side3;
    printf("Enter the value of side 1");
    scanf("%d",&side1);
    printf("Enter the value of side 2");
    scanf("%d",&side2);
    printf("Enter the value of side 3");
    scanf("%d",&side3);
    if (side1+side2>side3||side1+side3>side2||side2+side3>side1) {
        printf("The triangle is valid\n");
        if ((side1==side2)&&(side2==side3)&&(side3==side1)) {
            printf("Equilateral Triangle");
        }
        else if ((side1==side2)||(side2==side3)||(side3==side1)) {
            printf("Isosceles Triangle");
        }
        else if (side1!=side2!=side3) {
            printf("Scalene Triangle");
        }
        else {
            printf("Right angled Triangle");
         }
    }
    return 0;

}
