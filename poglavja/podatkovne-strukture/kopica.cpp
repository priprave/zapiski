#include <stdio.h>
#include <queue>  // priority_queue se najde v <queue>
using namespace std;

int main() {
    priority_queue<int> vrsta;

    vrsta.push(3);
    vrsta.push(7);
    vrsta.push(5);

    while (vrsta.size() > 0) {
        // v prioritetni vrsti uporabimo .top() namesto .front()
        printf("%d\n", vrsta.top());
        vrsta.pop();
    }

    return 0;
}
