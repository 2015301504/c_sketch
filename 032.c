#include <stdio.h>
void main(){
	int n,g;

	printf("Select the number: ");
	scanf("%d", &n);
	printf("Input the grade: ");
	scanf("%d", &g);

	if(n == 1){
		if(g >= 70) printf("You R Pass.\n");
		else		printf("You R NP.\n");
	}

	else if(n == 2){
		if(g >= 60) printf("You R Pass.\n");
		else		printf("You R NP.\n");
	}
}