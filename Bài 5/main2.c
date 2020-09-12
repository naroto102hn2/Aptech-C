#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,max;
	printf("Nhap vao 3 so a,b,c khac nhau: \n");
	scanf("%d%d%d",&a,&b,&c);
	max = a;
	if(a>b){
		if(a>c) printf("Max la a");
		if(a<c) printf("Max la c");
	}
	if(a<b){
		if(b<c) printf("Max la c");
		if(b>c) printf("Max la b");
	}
	return 0;
}
