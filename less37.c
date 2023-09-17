#include <stdio.h>

int main() {
    int numLines = 0;

    scanf("%d", &numLines);

    for (int i = 1; i <= numLines; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

