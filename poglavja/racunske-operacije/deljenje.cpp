#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int k = a / b, o = a % b;
    printf("rezultat deljenja je %d, z ostankom %d\n", k, o);
    printf("%d = %d * %d + %d\n", a, k, b, o);
    return 0;
}
