#include <stdio.h>

int seznam[1000];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &seznam[i]);
    }

    for (int i = 0; i < N; i++) {
        int obratni = N-i-1;
        printf("%d ", seznam[obratni]);
    }
    printf("\n");

    return 0;
}
