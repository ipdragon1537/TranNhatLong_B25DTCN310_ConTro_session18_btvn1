#include <stdio.h>
int main() {
    int soNguyen = 0;
    int* conTroSoNguyen = &soNguyen;
    printf("--- Truy cap truc tiep vao bien ---\n");
    printf("Gia tri cua bien 'soNguyen' la: %d\n", soNguyen);
    printf("Dia chi cua bien 'soNguyen' la: %p\n", &soNguyen);
    printf("\n");
    return 0;
}
