#include <stdio.h>

#define N 10

void main(void) {

    double array[N];
    double tmp;

    printf("Enter the array\n");

    for (int i = 0; i < N; i++) {
        scanf_s("%lf", &array[i]);
    }

    printf("Your array is:\n");
    for (int i = 0; i < N; i++) {
        printf("%lf ", array[i]);
    }

    for (int i = 0; i < N; i++) {
        if (array[i] < 0) {
            tmp = array[0];
            array[0] = array[i];
            array[i] = tmp;
        }
    }

    printf("\nAnswer is:\n");
    for (int i = 0; i < N; i++) {
        printf("%lf ", array[i]);
    }

}
