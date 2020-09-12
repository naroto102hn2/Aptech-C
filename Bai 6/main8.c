#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,s=1;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s*=i;
	}
	printf("Gia tri cua %d! la: %d",n,s);
	return 0;
}
