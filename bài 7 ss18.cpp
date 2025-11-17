#include <stdio.h>
void sapXep(int* mang, int kichThuoc);
void inMang(int* mang, int kichThuoc);
int main() {
    int soNguyen[] = {5, 2, 8, 1, 9, 4};
    int kichThuoc = sizeof(soNguyen) / sizeof(soNguyen[0]);
    printf("Mang ban dau:\n");
    inMang(soNguyen, kichThuoc);
    sapXep(soNguyen, kichThuoc);
    printf("\nMang sau khi sap xep:\n");
    inMang(soNguyen, kichThuoc);

    return 0;
}
void sapXep(int* mang, int kichThuoc) {
    int i, j;
    int temp;

    for (i = 0; i < kichThuoc - 1; i++) {
        for (j = 0; j < kichThuoc - i - 1; j++) {
            if (*(mang + j) > *(mang + j + 1)) {
                temp = *(mang + j);
                *(mang + j) = *(mang + j + 1);
                *(mang + j + 1) = temp;
            }
        }
    }
}

// Ð?nh nghia hàm in m?ng
void inMang(int* mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");
}

