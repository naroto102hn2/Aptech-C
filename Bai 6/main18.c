#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	while(1){
	printf("\nNhap n: ");
	scanf("%d",&n);
	printf("%c",n);
	if(n==0) break;
	}
	
	return 0;
}
