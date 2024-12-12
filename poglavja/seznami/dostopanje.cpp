#include <stdio.h>

int seznam_stevil[300];

int main() {
    seznam_stevil[3] = 7;
    seznam_stevil[4] = 9;
    seznam_stevil[5] = seznam_stevil[3] + seznam_stevil[4];
    printf("%d\n", seznam_stevil[5]);  // izpiše 16
    return 0;
}
