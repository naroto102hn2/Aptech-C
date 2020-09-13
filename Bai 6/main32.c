#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N,i,dema=0,demd=0,dem0=0,a[1000];
	printf("Nhap N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		printf("Nhap: ");
		scanf("%d",&a[i]);
		if(a[i]>0) demd++;
		if(a[i]<0) dema++;
		if(a[i]==0) dem0++;
	}
	printf("So so duong la: %d",demd);
	printf("\nSo so am la: %d",dema);
	printf("\nSo so 0 la: %d",dem0);
	return 0;
}
