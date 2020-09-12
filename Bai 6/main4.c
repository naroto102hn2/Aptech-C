#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,j;
	printf("Nhap chieu cao tam giac: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<2*n;j++){
			if(abs(n-j)<=i-1) printf(" * ");
			else printf("   ");
		}
		printf("\n");
	}
	return 0;
}
