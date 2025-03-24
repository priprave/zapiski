#include <stdio.h>
#include <map>
using namespace std;

int main() {

    map<char, int> slovar;

    // Dodamo nekaj vrednosti
    slovar['a'] = 3;
    slovar['b'] = 6;
    slovar['g'] = 7;
    slovar['8'] = 8;

    // Vse shranjene podatke lahko pregledamo s for-each zanko
    for (auto p : slovar) {
        // tip spremenljivke p je v tem primeru pair<char, int>
        printf("%c: %d\n", p.first, p.second);
    }

    // Do podatkov lahko dostopamo z oglatimi oklepaji
    printf("Vrednost pri 'g': %d\n", slovar['g']);

    // Preverimo, če ima nek ključ shranjeno vrednost
    if (slovar.count('c')) {
        printf("'c' je v slovarju.\n");
    } else {
        printf("'c' ni v slovarju.\n");
    }

    // Podatke lahko odstranjujemo po ključih
    slovar.erase('b');

    // Na voljo sta nam tudi metodi lower_bound in upper_bound, ki
    // poiščeta prvi ključ v slovarju, večji ali enak (oziroma večji)
    // danemu iskanemu ključu.
    // Funkciji vrneta iterator, ki kaže na par (ključ, vrednost),
    // oziroma na slovar.end(), če ne najdeta ničesar.
    map<char, int>::iterator it = slovar.lower_bound('c');
    printf(
        "Najmanjsi kljuc, vecji od 'c': %c. Vrednost = %d\n",
        (*it).first,
        (*it).second);

    return 0;
}
