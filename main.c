#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	short y;
	char z;
	float a;
	double b;
	
	printf("byte of int : %d\n", sizeof(x));
	printf("byte of short : %d\n", sizeof(y));
	printf("byte of char : %d\n", sizeof(z));
	printf("byte of flaot : %d\n", sizeof(a));
	printf("byte of double : %d\n", sizeof(b));
	
	return 0;
}
