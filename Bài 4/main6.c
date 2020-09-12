#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Date(int a, int b, int c){
	printf("%02d/%02d/%02d",a,b,c%100);
}

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("Nhap ngay: ");
	scanf("%d",&a);
	printf("Nhap thang: ");
	scanf("%d",&b);
	printf("Nhap nam: ");
	scanf("%d",&c);
	Date(a,b,c);
	return 0;
}
