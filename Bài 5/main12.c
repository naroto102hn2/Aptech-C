#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char game;
	printf("1.Bua(B))\n");
	printf("2.Keo(K))\n");
	printf("3.Giay(G))\n");
	printf("Nhap lua chon: ");
	scanf("%d",&game);
	switch(game){
		case B: printf("Ban da chon Bua");break;
	}
	return 0;
}
