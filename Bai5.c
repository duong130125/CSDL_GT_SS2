#include <stdio.h>

int main() {
    int n, k, found = 0;

    printf("Nhap so phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);
  
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap phan tu k can xoa: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; 
            break; 
        }
    }

    if (found) {
        printf("Mang sau khi xoa phan tu %d: ", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Khong co phan tu %d trong mang.", k);
    }

    return 0;
}

