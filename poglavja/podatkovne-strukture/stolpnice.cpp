#include <stdio.h>

int arr[1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        bool najdena = false;
        for (int j = i-1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                printf("%d\n", j);
                najdena = true;
                break;
            }
        }
        if (!najdena) {
            printf("Ni visje stolpnice na levi.\n");
        }
    }
    return 0;
}
