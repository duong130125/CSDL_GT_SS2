#include <stdio.h>

int main() {
    int n, x, count = 0;

    printf("Nhap so phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri x can dem: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("So lan xuat hien cua %d trong mang la: %d\n", x, count);

    return 0;
}

