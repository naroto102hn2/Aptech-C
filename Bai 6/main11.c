#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dai,rong,i,j;
	printf("Nhap chieu dai: ");
	scanf("%d",&dai);
	printf("Nhap chieu rong: ");
	scanf("%d",&rong);
	for(i=1;i<=rong;i++){
		for(j=1;j<=dai;j++){
			if(j==1||j==dai||i==1||i==rong) printf(" * ");
			else printf("   ");
		}
		printf("\n");
	}
	return 0;
}
