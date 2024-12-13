#include <stdio.h>
int kiemtrasonguyento(int num){
	if (num==1){
		return 0;
	}
	for (int i = 2; i*i <=num; i++){
		if (num%i==0){
			return 0;
		}
	}
	return 1;
}
int main (){
	int count = 0, num=2, n;
	int i = 2;
	printf ("nhap vao so nguyen duong: ");
	scanf ("%d",&n);
	if (n>=1){
		while (count <n){
				if (kiemtrasonguyento(num)){
					printf ("%d\n",num);
					count ++;
				}
				num++;
			}
		}
		return 0;
	}
