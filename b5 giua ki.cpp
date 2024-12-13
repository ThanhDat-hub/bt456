#include <stdio.h>
int main (){
	int num;
	printf ("nhap mot so nguyen duong: ");
	scanf ("%d",&num);
	if (num >0){
		for (int i = 2 ; i < num; i++){
			if (num%i==0){
				printf ("khong phai la so nguyen to \n");
				return 0;
			}
			else if (num == 1){
				printf ("khong phai la so nguyen to \n");
				return 0;
			}
		}
	printf ("la so nguyen to.\n");
	}
	else {
		printf ("khong phai la so nguyen duong \n");
	}
	return 0;
}
