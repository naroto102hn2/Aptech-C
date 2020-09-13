#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,n,i;
	double TS,MS;
	double sum =1;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		TS = pow(x,i);
		MS = i+1;
		sum +=TS/MS;
	}
	printf("Tong la %lf",sum);
	return 0;
}
