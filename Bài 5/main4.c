#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("Enter your number: ");
	scanf("%d",&a);
	if(a%2==0) printf("Even");
	else printf("Odd");
	getch();
	return 0;
}
