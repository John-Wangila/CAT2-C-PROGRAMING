#include <stdio.h>

int main() {
    // Declare and initialize a 2D array
    int scores[2][2] = { {10, 20}, {30, 40} };

    // Print the elements of the array using a nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
