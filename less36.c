#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0; 
    int sum = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("%d \n", sum);

    return 0;
}

