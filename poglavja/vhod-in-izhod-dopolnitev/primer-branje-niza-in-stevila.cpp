#include <stdio.h>

int main() {
    char a[50];
    int b;
    scanf("%[abcd]%d", a, &b);
    printf("Niz: %s, stevilo: %d\n", a, b);
    return 0;
}
