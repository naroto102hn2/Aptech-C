#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	printf("Nhap n: ");
	scanf("%d",&n);
	int i1=1,i2=1,itong;
	for(i=3;i<=n;i++){
		itong=i1+i2;
		i1=i2;
		i2=itong;
	}
	printf("So hang thu n trong day la: %d ",itong);
	return 0;
}
