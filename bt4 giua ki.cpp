#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("hay nhap mot so nguyen duong\n");
    }
     printf("cac uoc cua so %d la: ", n);
     for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i); 
        }
    }
    printf("\n");
    return 0;
}

