#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	int k=0;
	printf("So can kiem tra: ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0) k=1;
	}
	if(k==1) printf("Not PRIME");
	else printf("PRIME");
	return 0;
}
