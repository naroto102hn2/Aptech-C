#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,max,max1,max2;
	printf("Enter your numbers: \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max1 = a;
	if(b>a) max1 = b;
	max2 = c;
	if(d>c) max2 = d;
	if(max1>max2) max=max1;
	if(max2>max1) max=max2;
	printf("\nMax = %d",max);
	return 0;
}
