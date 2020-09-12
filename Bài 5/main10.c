#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char color;
	printf("Nhap mau: ");
	scanf("%c",&color);
	if(color=='R'||color=='r'){
		printf("RED");
	}
	else if(color=='G'||color=='g'){
		printf("GREEN");
	}
	else if(color=='B'||color=='b'){
		printf("BLUE");
	}
	else{
		printf("BLACK");
	}
	return 0;
}
