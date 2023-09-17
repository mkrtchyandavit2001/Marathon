#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;

	scanf("%d", &num1);
	scanf("%d", &num2);

	if(num1 > num2){
		printf("%d", num1);
	}else if(num1 < num2){
		printf("%d", num2);
	}

return 0;
}
