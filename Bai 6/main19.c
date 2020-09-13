#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int UCLN(int a, int b){
	if(a==0||b==0){
		return a+b;
	}
		while(a!=b){
			if(a>b) a-=b;
			else b-=a;
		}
		return a;
}

int main(int argc, char *argv[]) {
	int a,b;
	printf("Nhap a,b: \n");
	scanf("%d%d",&a,&b);
	printf("UCLN = %d",UCLN(a,b));
	printf("\nBCNN = %d",a*b/UCLN(a,b));
	return 0;
}
