#include <stdio.h>

int main() {
    int n = 0;
    int first = 0; 
    int second = 1;
    int next = 0;

    scanf("%d", &n);

//    printf(" %d \n", n);

    do {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    } while (first <= n);

    return 0;
}

