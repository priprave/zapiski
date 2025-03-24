#include <stdio.h>
#include <map>
using namespace std;

int main() {
    map<int, int> arr;

    // Preberemo podatke
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        arr[x] = y;  // O(log n) namesto O(1) pri seznamu
    }

    // Sedaj imamo podatke shranjene, in lahko z njimi naredimo,
    // kar algoritem zahteva.
    // Za demonstracijo jih samo izpišemo, kjer vidimo tudi nekaj
    // nove sintakse.
    for (auto[x, y] : arr) {
        printf("%d: %d\n", x, y);
    }

    return 0;
}
