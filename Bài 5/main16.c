#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,p,m;
	printf("Nhap a,b,c: \n");
	scanf("%f%f%f",&a,&b,&c);
	p=(a+b+c)/2;
	m=p*(p-a)*(p-b)*(p-c);
	if(a+b>c && a+c>b && b+c>a){
		printf("La tam giac\n");
		printf("Dien tich la: %.2f",sqrt(m));
	}
	else{
		printf("Khong phai tam giac");
	}
	return 0;
}
