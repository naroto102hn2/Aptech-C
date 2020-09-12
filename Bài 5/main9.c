#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int luachon,choose;
	printf("1.Bua(B)\n");
	printf("2.Keo(K)\n");
	printf("3.Giay(G)\n");
	printf("Nhap lua chon: ");
	scanf("%d",&luachon);
	switch(luachon){
		case 1: printf("Ban da chon Bua, moi ban chon doi thu\n");
				printf("1.Keo\n");
				printf("2.Giay\n");
				printf("Nhap lua chon: ");
				scanf("%d",&choose);
				switch(choose){
					case 1: printf("Thang");break;
					case 2: printf("Thua");break;
				}
				break;
		case 2: printf("Ban da chon Keo, moi ban chon doi thu\n");
				printf("1.Bua\n");
				printf("2.Giay\n");
				printf("Nhap lua chon: ");
				scanf("%d",&choose);
				switch(choose){
					case 1: printf("Thua");break;
					case 2: printf("Thang");break;
				}
				break;
		case 3: printf("Ban da chon Giay, moi ban chon doi thu\n");
				printf("1.Bua\n");
				printf("2.Keo\n");
				printf("Nhap lua chon: ");
				scanf("%d",&choose);
				switch(choose){
					case 1: printf("Thang");break;
					case 2: printf("Thua");break;
				}
				break;
		default: printf("Moi nhap lua chon 1-3");
	}
	return 0;
}
