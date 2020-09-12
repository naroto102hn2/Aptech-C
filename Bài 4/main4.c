#include <stdio.h>
#include <stdlib.h>

#define PI  3.14
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SV(float R){
	printf("Dien tich S = %.3f",PI*R*R);
	printf("\nThe tich V = %.3f",4/3*PI*R*R*R);
}

int main(int argc, char *argv[]) {
	float R;
	printf("Nhap ban kinh R: ");
	scanf("%f",&R);
	SV(R);
	return 0;
}
