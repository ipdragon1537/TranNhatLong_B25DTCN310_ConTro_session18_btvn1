#include <stdio.h>
void capNhatPhanTu(int* mang, int viTri, int giaTriMoi);
void inMang(int* mang, int kichThuoc);
int main() {
    int soNguyen[] = {10, 20, 30, 40, 50};
    int kichThuoc = sizeof(soNguyen) / sizeof(soNguyen[0]);
    printf("Mang ban dau:\n");
    inMang(soNguyen, kichThuoc);
    int viTriCapNhat = 1;
    int giaTriMoi = 99;
    capNhatPhanTu(soNguyen, viTriCapNhat, giaTriMoi);
    printf("\nMang sau khi cap nhat phan tu thu %d:\n", viTriCapNhat);
    inMang(soNguyen, kichThuoc);

    return 0;
}
void capNhatPhanTu(int* mang, int viTri, int giaTriMoi) {
    *(mang + viTri) = giaTriMoi;
}
void inMang(int* mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");
}

