#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Ideja: hranimo si velikost prejšnje žlice in trenutno velikost
    // kupa. Ko preberemo manjšo žlico od trenutne, bomo izpisali
    // velikost kupa in začeli nov kup s to žlico.

    int prejsnja;  // velikost prejšnje žlice
    int velikost = 1;  // število žlic v trenutnem kupu
    // Prvo žlico obravnavamo posebej, in jo bomo vedno dali na
    // začetni kup, zato lahko začnemo z velikostjo 1, in beremo
    // direktno v prejsnja
    scanf("%d", &prejsnja);

    // V zanki beremo velikosti. Ker smo eno velikost že prebrali,
    // iteriramo le do n-1
    for (int i = 0; i < n-1; i++) {
        int trenutna;
        scanf("%d", &trenutna);
        if (trenutna > prejsnja) {
            // začnemo nov kup, na katerega že položimo trenutno
            // žlico
            printf("%d\n", velikost);
            velikost = 1;
        } else {
            // žlico lahko damo na isti kup
            velikost++;
        }
        prejsnja = trenutna;
    }

    // zadnjega kupa še nismo izpisali, ker nismo nanj nikoli
    // poskusili položiti prevelike žlice
    printf("%d\n", velikost);
    return 0;
}
