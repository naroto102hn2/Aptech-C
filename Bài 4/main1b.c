#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long Bin10Dec(int binaryNumber){
	long long decimalNumber = 0;
	int p=0;
	while(binaryNumber>0){
		decimalNumber+=(binaryNumber%10)* pow(2,p);
		p++;
		binaryNumber/=10;
	}
	return decimalNumber;
}

int main(int argc, char *argv[]) {
	int binaryNumber;
	printf("Nhap so nhi phan: ");
	scanf("%d",&binaryNumber);
	printf("So thap phan la: %lli",Bin10Dec(binaryNumber));
	return 0;
}
