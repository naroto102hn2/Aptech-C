#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h,i,j;
	printf("Nhap chieu cao h: ");
	scanf("%d",&h);
	for(i=1;i<=h;i++){
		for(j=1;j<2*h;j++){
			if(abs(h-j)==i-1||i==h) printf(" * ");
			else printf("   ");
		}
		printf("\n");
	}
	return 0;
}
