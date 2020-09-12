#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	float sum = 0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=1.0*1/i;
	}
	printf("Tong nghich dao n so nguyen dau tien la: %f",sum);
	return 0;
}
