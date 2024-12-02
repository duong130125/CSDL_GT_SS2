#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao so phan tu cua mang (0< n <= 100): ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
   
    printf("Max: %d\n", max);

    return 0;
}

