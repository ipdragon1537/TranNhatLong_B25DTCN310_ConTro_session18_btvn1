#include <stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("\nGia tri sau khi hoan doi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
