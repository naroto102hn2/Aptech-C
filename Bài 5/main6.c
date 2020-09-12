#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,delta;
	float x1,x2;
	printf("Giai phuong trinh bac 2: ax2 + bx + c = 0\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("\nAnswer:\n");
	while(a==0){
		printf("Moi nhap lai a khac 0: ");
		scanf("%f",&a);
		
	}
	delta=b*b-4*a*c;
	if(delta>0){
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;
		printf("%.2f\n",x1);
		printf("%.2f",x2);
	}
	if(delta==0){
		x1=x2=-b/2*a;
		printf("%.2f",x1);
	}
	if(delta<0){
		printf("Phuong trinh vo nghiem");
	}
	return 0;
}
