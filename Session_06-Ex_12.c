#include <stdio.h>

int main() {
    int n;
    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);
    printf("%d số đầu tiên trong dãy Fibonacci là:\n", n);
    int a = 0, b = 1;
    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
