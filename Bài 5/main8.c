#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int thang;
	printf("Nhap vao thang: ");
	scanf("%d",&thang);
	switch(thang){
		case 1: printf("30");break;
		case 2: printf("28/29");break;
		case 3: printf("30");break;
		case 4: printf("31");break;
		case 5: printf("30");break;
		case 6: printf("31");break;
		case 7: printf("30");break;
		case 8: printf("30");break;
		case 9: printf("31");break;
		case 10: printf("30");break;
		case 11: printf("31");break;
		case 12: printf("30");break;
		default: printf("Nhap lai thang trong khoang 1-12");
	}
	getch();
	return 0;
}
