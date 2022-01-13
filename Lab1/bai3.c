#include <stdio.h>
int main() {
    int a[1000];
    int b[1000];
    int n, i;
    printf("Nhập số phần tử mảng A: ");
    scanf("%d \n", &n);
    b[0] = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i < n - 1) {
            b[i + 1] = a[i];
        }
        b[i] += a[i];
        if (i > 0) {
            b[i - 1] += a[i];
        }
    }
    printf("Mảng B thỏa mãn điều kiện đề bài dựa trên mảng A là: ");
    for (i = 0; i < n; i++) {
        printf ("%d  ", b[i]);
    }


}