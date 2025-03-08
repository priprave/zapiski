int *arr = nullptr;
int kapaciteta = 0;  // število elementov, ki jih lahko shranimo v arr
int velikost = 0;  // število elementov, trenutno shranjenih v seznamu

void dodaj_element(int k, int i) {
    if (velikost == kapaciteta) {
        // Ne moremo dodati novega elementa, saj imamo rezerviranega
        // premalo spomina.
        // Na začetku si torej sposodimo več spomina, in v nov spomin
        // prekopiramo stare podatke
        int *nov_arr = (int*) malloc((kapaciteta + 1) * sizeof(int));
        for (int j = 0; j < velikost; j++) {
            nov_arr[j] = arr[j];
        }
        kapaciteta++;

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
