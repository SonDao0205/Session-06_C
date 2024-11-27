#include<stdio.h>
int main(){
    int number, so_le = 0, so_chan = 0;
    printf("Nhap lan luot 5 so nguyen\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Nhap so thu %d : ",i);
        scanf("%d",&number);
        if (number % 2 == 0)
        {
            so_chan += 1;
        }
        else{
            so_le += 1;
        }
        
    }
    printf("Gom %d so le\n", so_le);
    printf("Gom %d so chan\n", so_chan);
}