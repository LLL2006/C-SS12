#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int n1, n2, tong;

    printf("Nhap so thu nhat: ");
    scanf("%d", &n1);

    printf("Nhap so thu hai: ");
    scanf("%d", &n2);

    tong = tinhTong(n1, n2);

    printf("Tong cua %d va %d la: %d\n", n1, n2, tong);

    return 0;
}

