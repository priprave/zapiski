#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[1000];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr+n);

    for (int j = 0; j < q; j++) {
        int k;
        scanf("%d", &k);
        int idx = lower_bound(arr, arr+n, k) - arr;
        if (arr[idx] == k)
            printf("Stevilo %d se pojavi v seznamu.\n", k);
        else
            printf("Stevila %d ni v seznamu.\n", k);
    }

    return 0;
}
