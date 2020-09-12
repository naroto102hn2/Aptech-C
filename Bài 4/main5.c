#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void powOfa(float a){
	printf("Binh phuong cua a: %f",pow(a,2));
	printf("\nLap phuong cua a: %f",pow(a,3));
	printf("\nGia tri cua a mu 4: %f",pow(a,4));
}

int main(int argc, char *argv[]) {
	float a;
	printf("Nhap a: ");
	scanf("%f",&a);
	powOfa(a);
	return 0;
}
