#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gcd(int a, int b){
	if(a==0||b==0) return a+b;
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}

int main(int argc, char *argv[]) {
	int a,b;
	printf("Nhap a,b: \n");
	scanf("%d%d",&a,&b);
	printf("UCLN la: %d",gcd(a,b));
	printf("\nBCNN la: %d",a*b/gcd(a,b));
	return 0;
}
