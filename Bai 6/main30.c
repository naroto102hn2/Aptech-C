#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	while(1){	
		char c;
		printf("\nNhap vao 1 ki tu: ");
		scanf("%c",&c);
		if(c>='a'&&c<='z'){
			c=c-32;
			printf("Ki tu chuyen sang in hoa la: %c\n",c);continue;
		}
		else if(c>='A' && c<='Z'){
			c=c+32;
			printf("Ki tu chuyen sang dang thuong la: %c\n",c);continue;
		}
		else if(c>='0'&&c<='9'){
			printf("Ki tu vua nhao la so %c\n",c);continue;
		}
		
	}
	return 0;
}
