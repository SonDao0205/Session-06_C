#include <stdio.h>

int main() {
    int n, prime = 1;
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &n);
    if (n < 2) {
        prime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }
    if (prime) {
        printf("Day la SNT\n\n");
    } else {
        printf("Day khong phai la SNT\n");
    }

    return 0;
}
