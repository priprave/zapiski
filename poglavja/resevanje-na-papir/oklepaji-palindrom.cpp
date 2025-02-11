#include <stdio.h>

// Predpostavimo, da je niz dolg največ 1000 znakov
char niz[1001];
char obrnjen[1001];

int main() {
    scanf("%[^\n]", niz);

    // Opazimo, da niz ne more biti hkrati palindrom in zrcalen,
    // saj bi potem prvi znak moral biti hkrati enak in različen
    // od zadnjega znaka. Zato lahko le posebej preverimo, če je
    // niz palindrom ali če je zrcalen

    // Za preverjanje palindromskosti bomo obrnili niz, potem
    // pa ga primerjali z originalnim
    int dolzina = strlen(niz);
    for (int i = 0; i < dolzina; i++) {
        obrnjen[i] = niz[dolzina-i-1];
    }

    if (strcmp(niz, obrnjen) == 0) {
        printf("palindrom\n");
    }

    // ne znam preveriti, če je niz zrcalen, kratek razmislek pa
    // pove, da niz lihe dolžine ne more biti nikoli zrcalen, saj
    // znak na sredini ne mora biti enak svoji zrcalni sliki.
    if (dolzina % 2 == 1) {
        printf("navaden\n");
    } else {
        printf("zrcalen izraz\n");
    }
    return 0;
}
