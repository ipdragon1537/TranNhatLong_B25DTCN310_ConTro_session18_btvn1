#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void daoNguocChuoi(char* nguon, char* dich) {
    int doDai = strlen(nguon);
    char* conTroNguon = nguon;
    char* conTroDich = dich + doDai - 1;

    while (*conTroNguon != '\0') {
        *conTroDich = *conTroNguon;
        conTroNguon++;
        conTroDich--;
    }
    *(dich + doDai) = '\0';
}

int main() {
    char inputString[MAX_SIZE];
    char reverseString[MAX_SIZE];
    printf("Nhap vao mot chuoi: ");
    fgets(inputString, MAX_SIZE, stdin);
    inputString[strcspn(inputString, "\n")] = 0;
    daoNguocChuoi(inputString, reverseString);
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);
    return 0;
}

