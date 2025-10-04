//Experiment 3.6: WAP using ternary operator, the user should input the length and breadth of a rectangle,
//one has to find out which rectangle has the highest perimeter.
//The minimum number of rectangles should be three.

#include <stdio.h>

int main() {

    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    float length, breadth, perimeter;
    float maxPerimeter = 0;
    int maxIndex = 0;

    printf("Enter the number of rectangles (minimum 3): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Please enter at least 3 rectangles.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("Enter length and breadth of rectangle %d: ", i);
        scanf("%f %f", &length, &breadth);

        perimeter = 2 * (length + breadth);

        maxPerimeter = (perimeter > maxPerimeter) ? perimeter : maxPerimeter;
        maxIndex = (perimeter > maxPerimeter) ? i : maxIndex;
    }

    printf("The rectangle with the highest perimeter is rectangle %d with perimeter %.2f\n", maxIndex, maxPerimeter);

    return 0;
}
