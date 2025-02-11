#include <stdio.h>

char niz[300];
char obrnjen[300], zrcalen[300];

int main() {
    int dolzina = strlen(niz);

    // Prvo izračunamo obrnjen in zrcalen niz
    for (int i = 0; i < dolzina; i++) {
        obrnjen[i] = niz[dolzina-i-1];

        // tudi pri zrcaljenju se niz obrne, zato lahko gledamo
        // obrnjen
        if (obrnjen[i] == '(') zrcalen[i] = ')';
        if (obrnjen[i] == ')') zrcalen[i] = '(';
        if (obrnjen[i] == '[') zrcalen[i] = ']';
        if (obrnjen[i] == ']') zrcalen[i] = '[';
    }

    // preverimo, če se niz ujema z obrnjenim in zrcalnim
    if (strcmp(niz, obrnjen) == 0 && strcmp(niz, zrcalen)) {
        printf("palindrom in zrcalen\n");
    } else if (strcmp(niz, obrnjen) == 0) {
        pritnf("palindrom\n");
    } else if (strcmp(niz, zrcalen) == 0) {
        printf("zrcalen\n");
    } else {
        printf("navaden\n");
    }

    return 0;
}
