#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N,i,sum=0;
	printf("Nhap N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		if(i%2==1) sum+=i*i;
	}
	printf("Tong la: %d",sum);
	return 0;
}
