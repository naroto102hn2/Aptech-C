#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int gio,phut,giay;
	long them;

	printf("Enter hours, minutes, seconds: \n");
	scanf("%d%d%d",&gio,&phut,&giay);
	printf("\nGio ban dau %02d:%02d:%02d.\n",gio,phut,giay);
	printf("Extra seconds: ");
	scanf("%ld",&them);
	giay=giay+them;
	while(giay>=60){
		giay=giay-60;
		phut++;
		if(phut>=60){
			gio++;
			phut-=60;
		}
	}
	printf("\nGio luc sau %02d:%02d:%02d.\n",gio,phut,giay);
	return 0;
}
