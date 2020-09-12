#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Time(long a){
	int hour, minute, second;
	hour = a/3600;
	minute = (a%3600)/60;
	second = (a%3600)%60;
	printf("%02d:%02d:%02d",hour,minute,second);
}

int main(int argc, char *argv[]) {
	long a;
	printf("Nhap so giay: ");
	scanf("%li",&a);
	while(a<0 || a>86399){
		printf("Moi nhap lai: ");
		scanf("%li",&a);
	}
	Time(a);
	return 0;
}
