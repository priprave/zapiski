#include <stdio.h>
#include <queue>
using namespace std;

int main() {
    queue<int> vrsta;

    // Za dodajanje v vrsto uporabimo metodo push()
    vrsta.push(3);
    vrsta.push(7);
    vrsta.push(9);
    vrsta.push(4);

    // Z metodo front() lahko pogledamo prvi element vrste
    printf("%d\n", vrsta.front());  // izpiše 3

    // Za odstranjevanje iz vrste uporabimo metodo pop()
    vrsta.pop();
    vrsta.pop();

    printf("%d\n", vrsta.top());  // izpiše 9
    return 0;
}
