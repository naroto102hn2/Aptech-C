#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n,p,i;
	for(i=100;i<=999;i++){
		m=i%10;
		n=(i/10)%10;
		p=(i/100)%10;
		if(m+n+p==m*n*p) printf("%5d",i);
	}
	return 0;
}
