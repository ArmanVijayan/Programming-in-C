//Experiment 6.3. WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the
//frequency of a particular number in a list of integers.

#include <stdio.h>

int main() {
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, num, count = 0;

    printf("Enter number of elements: ");5

    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);


    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("Frequency of %d is: %d\n", num, count);

    return 0;
}
