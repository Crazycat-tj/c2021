#include <stdio.h>
#include <stdlib.h>


void main() {
    int n = 0;
    const int right_border = 105, left_border = 0;
    char value = 1;
    while (1) {
        if (value) {
            for (int i = 0; i < n; i++) {
                printf(" ");
            }
            printf("Running Word");
            n++;
            system("cls");
            if (n == right_border) {
                value = 0;
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                printf(" ");
            }
            printf("Running Word");
            n--;
            system("cls");
            if (n == left_border) {
                value = 1;
            }
        }
    }
}

