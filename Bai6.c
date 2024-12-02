#include <stdio.h>

int main() {
    int n, m;

    printf("Nhap so phan tu cua mang 1 (0 < n <= 1000): ");
    scanf("%d", &n);

    int arr1[n];
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Nhap so phan tu cua mang 2 (0 < m <= 1000): ");
    scanf("%d", &m);

    int arr2[m];
    for (int i = 0; i < m; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int result[n + m];
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        result[n + i] = arr2[i];
    }

    printf("Mang ket qua sau khi gop: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}

