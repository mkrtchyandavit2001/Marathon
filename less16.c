#include <stdio.h>

int main(){

	int height = 0;

	scanf("%d", &height);

	if(height < 150){
		printf("You match:");
	}else if(height >= 150){
		printf("Sorry, you don't match:");
	}

return 0;
}
