#include <stdio.h>
void main(){
	int n;

	printf("Input one integer: ");
	scanf("%d", &n);

	if(n % 2 == 1)
		printf("This is Odd.\n");
	else
		printf("This is Even.\n");

}
