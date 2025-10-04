//Experiment 3.4: WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include <stdio.h>

int main() {

    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    float x1, y1, x2, y2, x3, y3;
    float area;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    area = (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0;

    if (area == 0) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}
