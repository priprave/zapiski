#include <stdio.h>

int main() {
    char uporabnikovo_ime[300];
    scanf("%s", uporabnikovo_ime);  // NE napišemo znaka &
    printf("Zivjo %s!\n", uporabnikovo_ime);
    return 0;
}
