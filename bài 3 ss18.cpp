#include <stdio.h>
void tinhTong(int* so1, int* so2, int* ketQua){
    *ketQua = *so1 + *so2;
}
int main() {
    int soNguyen1 = 15;
    int soNguyen2 = 25;
    int ketQua;
    printf("So nguyen thu nhat: %d\n", soNguyen1);
    printf("So nguyen thu hai: %d\n", soNguyen2);
    tinhTong(&soNguyen1, &soNguyen2, &ketQua);
    printf("Tong cua hai so la: %d\n", ketQua);
    return 0;
}
