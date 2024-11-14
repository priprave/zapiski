#include <stdio.h>

void f(int x) {
    x = 2 * x;
}

int main() {
    int x = 3;
    f(x);
    printf("%d\n", x);  // izpiše 3
    return 0;
}
