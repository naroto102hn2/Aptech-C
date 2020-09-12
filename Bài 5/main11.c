#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int operation,x,y;
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap y: ");
	scanf("%d",&y);
	printf("1.+\n");
	printf("2.-\n");
	printf("3.*\n");
	printf("4./\n");
	printf("Enter your operation: ");
	scanf("%d",&operation);
	switch(operation){
		case 1: printf("x + y = %d",x+y);break;
		case 2: printf("x - y = %d",x-y);break;
		case 3: printf("x * y = %d",x*y);break;
		case 4: printf("x / y = %d",x/y);break;
		default: printf("Moi chon lai");
	}
	return 0;
}
