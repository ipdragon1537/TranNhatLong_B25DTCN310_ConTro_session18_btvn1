#include <stdio.h>
#include <stdlib.h>

void in_mang(int mang[], int kich_thuoc) {
    printf("Mang hien tai: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}

int* them_phan_tu(int mang_cu[], int *kich_thuoc_hien_tai, int gia_tri_moi, int vi_tri_can_them) {
    if (vi_tri_can_them < 0 || vi_tri_can_them > *kich_thuoc_hien_tai) {
        printf("Loi: Vi tri chen khong hop le!\n");
        return NULL;
    }

    int kich_thuoc_moi = *kich_thuoc_hien_tai + 1;
    int* mang_moi = (int*)malloc(kich_thuoc_moi * sizeof(int));
    if (mang_moi == NULL) {
        printf("Loi: Khong the cap phat bo nho!\n");
        return NULL;
    }

    for (int i = 0, j = 0; i < kich_thuoc_moi; i++) {
        if (i == vi_tri_can_them) {
            mang_moi[i] = gia_tri_moi;
        } else {
            mang_moi[i] = mang_cu[j];
            j++;
        }
    }

    *kich_thuoc_hien_tai = kich_thuoc_moi;

    return mang_moi;
}

int main() {
    int mang_ban_dau[] = {10, 20, 30, 40, 50};
    int kich_thuoc = 5;

    printf("--- Trang thai ban dau ---\n");
    in_mang(mang_ban_dau, kich_thuoc);

    int gia_tri_moi = 99;
    int vi_tri = 2;

    int* mang_sau_khi_them = them_phan_tu(mang_ban_dau, &kich_thuoc, gia_tri_moi, vi_tri);

    if (mang_sau_khi_them != NULL) {
        printf("\n--- Trang thai sau khi them phan tu ---\n");
        in_mang(mang_sau_khi_them, kich_thuoc);
        free(mang_sau_khi_them);
    } else {
        printf("\nKhong the them phan tu vao mang.\n");
    }

    return 0;
}

