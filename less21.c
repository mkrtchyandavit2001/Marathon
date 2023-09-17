#include <stdio.h>

int main() {

    char letter = 0;

    scanf(" %c", &letter);

    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {        
       if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
            letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            printf("Tary dzaynavor e: \n");
        } else {
            printf("Tary baghadzayn e: \n");
        }
    }

    return 0;
}

