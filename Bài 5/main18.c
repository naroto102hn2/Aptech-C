#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c; // 3 so nguyên
    int temp;
 
    printf("Enter 3 integer a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
 

    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
 
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
 
    // chuy?n s? bé nhì vào b
   if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
 
    printf("\n%d    %d    %d", a, b, c);
   
    getch();
    return 0;
}
