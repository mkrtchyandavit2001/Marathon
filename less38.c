#include <stdio.h>

int main() {
    int sideLength = 0;

    scanf("%d", &sideLength);

    for (int i = 1; i <= sideLength; i++) {
        for (int j = 1; j <= sideLength; j++) {
            if (i == 1 || i == sideLength || j == 1 || j == sideLength) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

