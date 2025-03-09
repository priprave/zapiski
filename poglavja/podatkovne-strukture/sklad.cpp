#include <stdio.h>
#include <stack>
using namespace std;

int main() {
    stack<int> sklad;

    // Za dodajanje na sklad uporabimo metodo push()
    sklad.push(3);
    sklad.push(7);
    sklad.push(9);
    sklad.push(4);

    // Z metodo top() lahko pogledamo vrhnji element sklada
    printf("%d\n", sklad.top());

    // Za odstranjevanje s sklada uporabimo metodo pop()
    sklad.pop();
    sklad.pop();

    printf("%d\n", sklad.top());
    return 0;
}
