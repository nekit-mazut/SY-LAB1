#include <stdio.h>

// Макрос для вывода
#define pr(x) printf("x = %u,  *x = %d,  &x = %u\n", (unsigned)x, *x, (unsigned)&x)

int main(void) {
    int mas[] = { 100, 200, 300 };

    int* ptr1;
    int* ptr2;

    ptr1 = mas;
    ptr2 = &mas[2];

    pr(ptr1);
    ptr1++;                          // сдвигаем указатель на следующий элемент (mas[1])
    pr(ptr1);

    pr(ptr2);

    ++ptr2;                          // сдвигаем ptr2 за пределы массива

    printf("ptr2 - ptr1 = %u\n", (unsigned)(ptr2 - ptr1));

    return 0;
}