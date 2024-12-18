#include <stdio.h>

int main() {
    int ngay, thang;
    printf("Nhap ngay sinh: ");
    scanf("%d", &ngay);
    printf("Nhap thang sinh: ");
    scanf("%d", &thang);

    if ((ngay >= 21 && thang == 3) || (ngay <= 20 && thang == 4))
        printf("Bach Duong\n");
    else if ((ngay >= 21 && thang == 4) || (ngay <= 20 && thang == 5))
        printf("Kim Nguu\n");
    else if ((ngay >= 21 && thang == 5) || (ngay <= 21 && thang == 6))
        printf("Song Tu\n");
    else if ((ngay >= 22 && thang == 6) || (ngay <= 22 && thang == 7))
        printf("Cu Giai\n");
    else if ((ngay >= 23 && thang == 7) || (ngay <= 22 && thang == 8))
        printf("Su Tu\n");
    else if ((ngay >= 23 && thang == 8) || (ngay <= 22 && thang == 9))
        printf("Xu Nu\n");
    else if ((ngay >= 23 && thang == 9) || (ngay <= 23 && thang == 10))
        printf("Thien Binh\n");
    else if ((ngay >= 24 && thang == 10) || (ngay <= 22 && thang == 11))
        printf("Bo Cap\n");
    else if ((ngay >= 23 && thang == 11) || (ngay <= 21 && thang == 12))
        printf("Nhan Ma\n");
    else if ((ngay >= 22 && thang == 12) || (ngay <= 19 && thang == 1))
        printf("Ma Ket\n");
    else if ((ngay >= 20 && thang == 1) || (ngay <= 18 && thang == 2))
        printf("Bao Binh\n");
    else if ((ngay >= 19 && thang == 2) || (ngay <= 20 && thang == 3))
        printf("Song Ngu\n");
    else
        printf("Ngay thang khong hop le\n");

    return 0;
}

