#include<stdio.h>
#include<math.h>
int main(){
    double tien_gui, tien_lai, lai_suat;
    float tong_tien;
    int thang;
    printf("Nhap so tien muon gui : ");
    scanf("%lf", &tien_gui);
    printf("Nhap lai suat : ");
    scanf("%lf", &lai_suat);
    printf("Nhap so thang muon gui : ");
    scanf("%d", &thang);
    lai_suat /= 100;
    tong_tien = tien_gui * pow(1 + lai_suat, thang);
    tien_lai = tong_tien - tien_gui;
    printf("So tien lai = %.3lf\n", tien_lai);
    printf("Tong tien nhan duoc = %.3lf\n",tong_tien);
}