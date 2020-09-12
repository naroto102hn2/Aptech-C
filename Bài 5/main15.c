#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hour,salary,income;
	printf("Nhap so gio lam: ");
	scanf("%d",&hour);
	printf("Nhap tien luong moi gio: ");
	scanf("%d",&salary);
	if(hour<=40){
		income=hour*salary;
		printf("Tien luong tong: %d",income);
	}
	if(hour>40){
		income=40*salary+(hour-40)*salary*1.5;
		printf("Tien luong tong: %d",income);
	}
	return 0;
}
