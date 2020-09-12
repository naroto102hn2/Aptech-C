#include <stdio.h>
#include <stdlib.h>
#define CHUC "Chuc ban vui ve\n"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
  	for(i = 0; i < 128; ++i){
        // if(i == 7) continue;
        printf("%5d%5c\n", i, i);
    }
	return 0;
}
