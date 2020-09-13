#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double C;
	long TS=1,MS=1;
	int N,k,i;
	printf("Nhap N, k (k<=N): \n");
	scanf("%d%d",&N,&k);
	while(k>N){
		printf("Moi nhap lai N, k: \n");
		scanf("%d%d",&N,&k);
	}
	for(i=1;i<=k;i++){
		TS = TS*(N-k+i);
		MS = MS*i;
	}
	C = TS/MS;
	printf("C = %lf",1.0*C);
	printf("\nAn phim bat ki de thoat");
	getch();
	return 0;
}
