#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,max;
	printf("Nhap vao 2 so a,b: \n");
	scanf("%d%d",&a,&b);
	if(a!=b){
		if(a>b) max=a;
		else if(a<b) max=b;
			printf("%d",max);
	}
	else {
		printf("Khong co max");
	}

	return 0;
}
