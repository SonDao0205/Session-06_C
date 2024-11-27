#include<stdio.h>
int main(){
    int n;
    printf("Nhap 1 so nguyen : ");
    scanf("%d", &n);
    for (int i = 0; i <= n ; i++)
    {
        if (n % i == 0)
        {
            printf("%d \t", i);
        }
    }
}