#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,delta,x,x1,x2;
    printf("Nhap co so a : ");
    scanf("%f", &a);
    printf("Nhap co so b : ");
    scanf("%f", &b);
    printf("Nhap co so c : ");
    scanf("%f", &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phuong trinh vo so nghiem.");
            }
                    
        }
        else{
            x = -c/b;
            printf("Nghiem x = %.2f",x);
        }
    }
    else{
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else{
            if (delta == 0)
            {
                x = -b/(2*a);
                printf("Nghiem x = %.2f",x);
            }
            else{
                x1 = (-b + sqrt(delta))/(2 * a);
                x2 = (-b - sqrt(delta))/(2 * a);
                printf("2 nghiem :\nx1 = %.2f\nx2 = %.2f",x1,x2);
            }
               
        }
           
        }
        
    }