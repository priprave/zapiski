#include <stdio.h>
#include <vector>
#include <algorithm>  // sort
using namespace std;  // nujno za vector

int main() {
    vector<int> seznam;

    for (int i = 0; i < 1000; i++) {
        seznam.push_back(i);
    }

    for (int i = 0; i < seznam.size(); i++) {
        if (seznam[i] > 500) {
            seznam[i] = 7;
        }
    }

    seznam.insert(seznam.begin() + 852, 17);
    printf("%d\n", seznam[852]);
    seznam.erase(seznam.begin() + 852);
    printf("%d\n", seznam[852]);

    sort(seznam.begin(), seznam.end());
    printf("%d\n", seznam[852]);

    seznam.clear();
    return 0;
}
