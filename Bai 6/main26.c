#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cho,ga;
	for(cho=1;cho<36;cho++){
		for(ga=1;ga<36;ga++){
			if(cho+ga==36 && cho*4+ga*2==100)
			printf("So cho: %-5d So ga: %-5d",cho,ga);
		}
	}
	return 0;
}
