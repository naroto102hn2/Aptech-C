#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	printf("Nhap vao so nguyen N: ");
	scanf("%d",&n);
	int temp=n;
	for(i=2;i<temp;){
		if(n%i==0){
			printf("%5d",i);
			n/=i;
		}
		else i++;
	}
	return 0;
}
