#include <stdio.h>

int main() {
    long int power;
    int j;

    printf("Table of Powers of Two\n\n");
    printf("\n n       2 to the n");
    printf("\n===    ==============");
// Iterates through the powers of two and displays the results as a table
    power = 1;
    for (j = 0; j < 11; j++) {
        if (j == 0)
           power = 1;
        else
           power = power * 2;
        printf("\n%2d       %8ld", j, power);
    }
}
