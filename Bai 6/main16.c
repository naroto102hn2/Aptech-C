#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	switch(n){
		                        case 0:

                                    printf("Khong"); break;

                        case 1:

                                    printf("Mot");         break;

                        case 2:

                                    printf("Hai");           break;

                        case 3:

                                    printf("Ba"); break;

                        case 4:

                                    printf("Bon");          break;

                        case 5:

                                    printf("Nam");        break;

                        case 6:

                                    printf("Sau");          break;

                        case 7:

                                    printf("Bay");          break;

                        case 8:

                                    printf("Tam");         break;

                        case 9:

                                    printf("Chin");         break;

                        default:

                                    printf("So da nhap khong hop le!");
	}
	return 0;
}
