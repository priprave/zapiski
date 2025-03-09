#include <stdio.h>
#include <stack>
using namespace std;

stack<int> sklad, indeksi;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        while (sklad.size() > 0 && sklad.top() < t) {
            sklad.pop();
            indeksi.pop();
        }
        if (sklad.size() == 0) {
            printf("Ni visje stolpnice na levi.\n");
        } else {
            printf("%d\n", indeksi.top());
        }
        sklad.push(t);
        indeksi.push(i);
    }
    return 0;
}
