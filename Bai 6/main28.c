#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float i=0.1;
	int k=0;
	while(i<=1000){
		i*=2;
		k++;
	}
	printf("So lan gap la: %d",k);
	return 0;
}
