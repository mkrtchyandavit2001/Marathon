#include <stdio.h>

int main(){

	int A = 0;
	int B = 0;

	scanf("%d", &A);
	scanf("%d", &B);

	int result = A && B ||  !B ^ A ;

	printf("%d", result);

return 0;
}
