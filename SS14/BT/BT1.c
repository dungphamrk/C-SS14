#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("địa chỉ %d\n", &a);
    printf("Giá trị %d\n", a);
    printf("địa chỉ bằng ptr %d\n", ptr);
    printf("Giá trị bẳng ptr%d\n", *ptr);
}