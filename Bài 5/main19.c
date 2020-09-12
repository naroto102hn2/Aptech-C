#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long tien1,tien2,sum,kw;
	printf("Nhap so kw: ");
	scanf("%ld",&kw);
	if(kw<=50){
		tien1=230*kw;
		tien2=0;
		sum=tien1+tien2;
	}
	else if(50<kw<=100){
		tien1=230*50;
		tien2=480*(kw-50);
		sum=tien1+tien2;
	}
	else if(100<kw<150){
		tien1=230*50;
		tien2=700*(kw-50);
		sum=tien1+tien2;
	}
	else if(kw>=150){
		tien1=230*50;
		tien2=900*(kw-50);
		sum=tien1+tien2;
	}
	printf("Tien tra dinh muc: %ld",tien1);
	printf("\nTien tra vuot dinh muc: %ld",tien2);
	printf("\nTong tien phai tra: %ld",sum);
	getch();
}
