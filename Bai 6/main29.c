 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N,i=2,j,k=0;
	printf("Nhap N: ");
	scanf("%d",&N);
	while(i<=N){
		for(j=2;j<i;j++){
			if(i%j==0) k=1;
		}
		if(k==0) printf("%5d",i);
		i++;
		k=0;
		
	}
	return 0;
}
