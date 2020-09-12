#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void cong(int a, int b){
	printf("a + b = %d\n",a+b);
}

void tru(int a, int b){
	printf("a - b = %d\n",a-b);
}

void nhan(int a, int b){
	printf("a * b = %d\n",a*b);
}

void chia(int a, int b){
	printf("a / b = %.3f\n",1.0*a/b);
	if(a%b==0){
		printf("Phep chia het");
	}
	else{
		printf("Phep chia co du");
	}
}

int main(int argc, char *argv[]) {
	int a,b;
	printf("Nhap a,b: \n");
	scanf("%d%d",&a,&b);
	cong(a,b);
	tru(a,b);
	nhan(a,b);
	chia(a,b);
	return 0;
}
