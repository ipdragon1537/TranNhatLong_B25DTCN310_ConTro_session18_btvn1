#include <stdio.h>
int timKiem(int* mang, int kichThuoc, int giaTriCanTim) {
    for (int i = 0; i < kichThuoc; i++) {
        if (*(mang + i) == giaTriCanTim) {
            return i;
        }
    }
    return -1;
}

int main() {
    int mangSoNguyen[] = {1, 2, 4, 5, 6, 7};
    int kichThuoc = sizeof(mangSoNguyen) / sizeof(mangSoNguyen[0]);
    int giaTriCanTim = 7;
    int ketQua = timKiem(mangSoNguyen, kichThuoc, giaTriCanTim);
    if (ketQua != -1) {
        printf("Gia tri %d duoc tim thay o vi tri: %d\n", giaTriCanTim, ketQua);
    } else {
        printf("Khong tim thay gia tri %d trong mang.\n", giaTriCanTim);
    }
    return 0;
}

