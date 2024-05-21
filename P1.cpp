#include <stdio.h>
#include <stdlib.h>

int main() {
    int data[5];
    int max, min, sum = 0;
    float ave;

    // Input 5 integers
    for (int i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }

    // Calculate sum
    for (int j = 0; j < 5; j++) {
        sum += data[j];
    }

    // Calculate average
    ave = (float)sum / 5;

    // Find maximum value
    max = data[0];
    for (int k = 1; k < 5; k++) {
        if (data[k] > max) {
            max = data[k];
        }
    }

    // Find minimum value
    min = data[0];
    for (int l = 1; l < 5; l++) {
        if (data[l] < min) {
            min = data[l];
        }
    }

    // Output sum, average, maximum, and minimum
    printf("%d %.1f %d %d\n", sum, ave, max, min);

    return 0;
}

