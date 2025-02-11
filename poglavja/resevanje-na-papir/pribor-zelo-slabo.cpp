#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // s scanfom preberemo število n
    // potem bom nkrat prebral število in ga shranil v int x.
    // Vsakič ko preberem večje število od velikosti trenutnega kupa
    // bom začel nov kup, in nanj zlagal žlice tako dolgo, dokler ne
    // dobim x, ki je večji od najmanjše žlice na kupu, takrat pa spet
    // začnem nov kup.
    // To ponavljam, dokler ne pridem do n, ko končam program in s
    // printf izpišem rešitev
    return 0;
}
