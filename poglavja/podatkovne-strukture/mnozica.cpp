#include <stdio.h>
#include <set>
using namespace std;

int main() {
    set<int> mnozica;

    mnozica.insert(1);
    mnozica.insert(2);
    mnozica.insert(2);
    mnozica.insert(4);
    mnozica.insert(6);
    mnozica.insert(6);
    mnozica.insert(6);
    mnozica.insert(7);
    mnozica.insert(10);
    mnozica.insert(10);
    mnozica.insert(13);
    mnozica.insert(19);

    printf("V mnozici je %d elementov.\n", mnozica.size());

    if (mnozica.count(10)) {
        printf("10 je v mnozici.\n");
    } else {
        printf("10 ni v mnozici.\n");
    }

    mnozica.erase(10);

    if (mnozica.count(10)) {
        printf("10 je v mnozici.\n");
    } else {
        printf("10 ni v mnozici.\n");
    }

    return 0;
}
