void dodaj_element(int k, int i) {
    if (velikost == kapaciteta) {
        // Ne moremo dodati novega elementa, saj imamo rezerviranega
        // premalo spomina.
        // Na začetku si torej sposodimo več spomina, in v nov spomin
        // prekopiramo stare podatke
        int nova_kapaciteta = 2*kapaciteta;
        if (nova_kapaciteta == 0) nova_kapaciteta = 1;
        int *nov_arr = malloc(nova_kapaciteta * sizeof(int));
        for (int j = 0; j < velikost; j++) {
            nov_arr[j] = arr[j];
        }
        kapaciteta = nova_kapaciteta;

        // Starega bloka spomina ne potrebujemo več, zato ga vrnemo
        // operacijskemu sistemu
        if (arr != nullptr) free(arr);
        arr = nov_arr;
    }
    // Nadaljujemo tako kot prej
    for (int j = velikost; j > i; j--) {
        arr[j] = arr[j-1];
    }
    arr[i] = k;
    velikost++;
}
