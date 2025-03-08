#include <stdio.h>

int arr[1000];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < q; j++) {
        int k;
        scanf("%d", &k);
        bool najdeno = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) {
                printf("Stevilo %d se pojavi v seznamu.\n", k);
                najdeno = true;
                break;
            }
        }
        if (!najdeno) {
            printf("Stevila %d ni v seznamu.\n", k);
        }
    }
    return 0;
}
