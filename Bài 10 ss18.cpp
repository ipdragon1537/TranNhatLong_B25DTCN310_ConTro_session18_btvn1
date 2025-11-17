#include <stdio.h>
void inMang(int mang[], int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}
void xoaPhanTu(int mang[], int *kichThuoc, int viTri) {
    if (viTri < 0 || viTri >= *kichThuoc) {
        printf("Vi tri xoa khong hop le.\n");
        return;
    }
    for (int i = viTri; i < *kichThuoc - 1; i++) {
        mang[i] = mang[i + 1];
        (*kichThuoc)--;
}

int main() {
    int mangSoNguyen[] = {10, 20, 30, 40, 50};
    int kichThuoc = 5;

    printf("Mang ban dau: ");
    inMang(mangSoNguyen, kichThuoc);
    int viTriCanXoa = 2;

    xoaPhanTu(mangSoNguyen, &kichThuoc, viTriCanXoa);
    printf("Mang sau khi xoa phan tu o vi tri %d: ", viTriCanXoa);
    inMang(mangSoNguyen, kichThuoc);
    return 0;
}

