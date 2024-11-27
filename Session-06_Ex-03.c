#include<stdio.h>
int main(){
    int pass = 123123, try;
    do
    {
        printf("Nhap mat khau : ");
        scanf("%d", &try);
        if (try == pass)
        {
            printf("Dung roi!!");
            break;
        }
        else{
            printf("Sai roi!!\n");
        }
    } while (try != pass);
}