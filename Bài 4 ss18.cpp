#include <stdio.h>
void inMang(int* mang, int kichThuoc){
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < kichThuoc; i++) {
        printf("Phan tu thu %d: %d\n", i, *(mang + i));
    }
}

int main() {
    int soNguyen[] = {10, 20, 30, 40, 50};
    int kichThuoc = sizeof(soNguyen) / sizeof(soNguyen[0]);
    inMang(soNguyen, kichThuoc);
    return 0;
}
