#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int toan,ly,hoa;
	printf("Nhap diem toan: ");scanf("%d",&toan);
	printf("Nhap diem ly: ");scanf("%d",&ly);
	printf("Nhap diem hoa: ");scanf("%d",&hoa);
	if(toan+ly+hoa>=15 && toan>=4 && ly>=4 && hoa>=4){
		printf("Dau\n");
		if(toan>=5&&ly>=5&&hoa>=5){
			printf("Hoc deu cac mon");
		}
		else{
			printf("Hoc chua deu cac mon");
		}
	}
	else{
		printf("Thi hong");
	}
	return 0;
}
