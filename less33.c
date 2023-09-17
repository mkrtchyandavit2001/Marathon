#include <stdio.h>

int main() {

	int num = 0;
	int sum = 0;

    	scanf("%d", &num);

	while (num != 0) {
        	int digit = num % 10;
       		sum += digit;
        	num /= 10;
    	}

    
	printf("%d\n", sum);

return 0;
}
