#include <stdio.h>

long long tinhGiaiThua(int n) {
    long long giaiThua = 1; 
    for (int i = 1; i <= n; i++) {
        giaiThua *= i; 
    }
    return giaiThua;
}

int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    long long ketQua = tinhGiaiThua(so);

    printf("Giai thua cua %d l�: %lld\n", so, ketQua);
 

    return 0;
}

