#include <stdio.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main() {
    unordered_set<int> mnozica;
    unordered_map<char, int> slovar;

    for (int i = 0; i < 20; i++) {
        mnozica.insert(2*i+7);
        slovar[i] = 2*i+7;
    }

    slovar.erase(0);
    mnozica.erase(7);

    for (int i = 0; i < 20; i++) {
        if (mnozica.count(i)) {
            printf("%d\n", slovar[i]);
        }
    }

    return 0;
}
