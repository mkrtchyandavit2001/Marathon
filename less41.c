#include <stdio.h>

int main() {

    int num1 = 0; 
    int num2 = 0; 
    int result = 0;
    char operator = 0;

    scanf("%d", &num1);

    scanf(" %c", &operator);  
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            }
            break;
        default:
            printf("Chi nermucvel hamapataskhan operatory: \n");
    }

    printf("%d \n", result);

    return 0;
}

