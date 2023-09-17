#include <stdio.h>

int main(){

	int estimation = 0; 

	scanf("%d", &estimation);

	if(estimation >= 90 && estimation <= 100){
		printf("A Class:");
	}else if(estimation >= 80 && estimation <= 89){
		printf("B Class:");
	}else if(estimation >= 70 && estimation <= 79){
		printf("C Class:");
	}else if(estimation >= 60 && estimation <= 69){
		printf("D Class:");
	}else if(estimation < 60){
		printf("F Class");
	}

return 0;
}






