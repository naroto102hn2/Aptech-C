#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N,i;
	long sum=0;
	printf("Nhap N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		sum+=i*i*i;
	}
	printf("Tong bac 3 cua N so nguyen dau tien la: %ld",sum);
	return 0;
}
