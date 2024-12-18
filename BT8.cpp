#include <stdio.h>
#include <math.h>

int main() {
    double tienGoc, laiSuat, tongTien, tienLai;
    int soThang;

    printf("Nhap so tien gui ban dau (VND): ");
    scanf("%lf", &tienGoc);
    printf("Nhap lai suat thang (%%): ");
    scanf("%lf", &laiSuat);
    printf("Nhap so thang gui: ");
    scanf("%d", &soThang);

    laiSuat /= 100;
    tongTien = tienGoc * pow(1 + laiSuat, soThang);
    tienLai = tongTien - tienGoc;

    printf("So tien lai: %.2f VND\n", tienLai);
    printf("Tong so tien nhan duoc: %.2f VND\n", tongTien);

    return 0;
}

